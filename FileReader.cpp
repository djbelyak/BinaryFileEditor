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
    ifstream inputFile(this->getFileName().c_str());
	//Если возникла ошибка
	if (inputFile.fail()) {
		//Сообщаем пользователю
        cerr << "Can't open file for reading!" << endl;
		return 1;
	}
	//Объявляем буфер
	unsigned char t;
	//Читаем файл до конца
	while(!inputFile.eof()) {
		t = inputFile.get();
		//для того, чтобы узнать размер
		this->size++;
	}

	//Выделяем память под массив
    try {
        this->binary = new unsigned char[this->getSize()];
    }
    catch (exception e) {
        cerr << "Out of memory!!!" << endl;
        return 2;
    }

    //возвращаемся в начало файла
    inputFile.seekg(0);
    for (int i=0; i<this->getSize(); i++) {
        this->binary[i] = inputFile.get();
    }

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
