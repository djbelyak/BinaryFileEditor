#include <string>
#include <vector>
#include <exception>

using namespace std;
#include "FileReader.h"

BinaryFileEditor::FileReader::FileReader() {
    this->binary = NULL;
}

BinaryFileEditor::FileReader::~FileReader() {
    if (this->binary != NULL)
        delete[] binary;
}

int BinaryFileEditor::FileReader::readFile() {
	//Открываем файл для чтения в бинарном режиме
    ifstream inputFile(this->getFileName().c_str(), ios_base::binary);
	//Если возникла ошибка
	if (inputFile.fail()) {
		//Сообщаем пользователю
        cerr << "Can't open file for reading!" << endl;
		return 1;
	}
    //Вычисляем длину файла
    inputFile.seekg (0, inputFile.end);
    this->size = inputFile.tellg();
    inputFile.seekg (0, inputFile.beg);

	//Выделяем память под массив
    try {
        this->binary = new unsigned char[this->getSize()];
    }
    catch (exception e) {
        // При переполнении памяти ошибка пользователю
        cerr << "Out of memory!!!" << endl;
        return 2;
    }

    //Читаем файл полностью
    for (int i=0; i<this->getSize(); i++) {
        this->binary[i] = inputFile.get();
    }
    //Закрываем фай полностью
    inputFile.close();

	return 0;
}

void BinaryFileEditor::FileReader::setFileName(string fileName) {
	this->fileName = fileName;
}

const string BinaryFileEditor::FileReader::getFileName() {
	return this->fileName;
}

const long BinaryFileEditor::FileReader::getSize() {
	return this->size;
}

unsigned char* BinaryFileEditor::FileReader::getBinary() {
	return this->binary;
}
