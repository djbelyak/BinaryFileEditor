#include <string>
#include <vector>
#include <exception>
using namespace std;

#include "FileWriter.h"
#include "Performer.h"

BinaryFileEditor::FileWriter::FileWriter() {
    this->binary = NULL;
}

BinaryFileEditor::FileWriter::~FileWriter() {
    if (this->binary != NULL)
        delete[] this->binary;
}

int BinaryFileEditor::FileWriter::writeFile() {
    //Открываем файл в бинарном режиме
    ofstream outputFile(this->fileName.c_str(), ios_base::binary);
    //Если возникла ошибка
    if (outputFile.fail()) {
        //Сообщаем пользователю
        cerr << "Can't open file for reading!" << endl;
        return 1;
    }

    //Пишем файл полностью
    for (int i=0; i<this->getSize(); i++) {
        outputFile.put(this->binary[i]);
    }
    outputFile.close();
    return 0;

}

void BinaryFileEditor::FileWriter::setFileName(string fileName) {
	this->fileName = fileName;
}

void BinaryFileEditor::FileWriter::setSize(long size) {
	this->size = size;
}

const long BinaryFileEditor::FileWriter::getSize() {
	return this->size;
}

void BinaryFileEditor::FileWriter::setBinary(const unsigned char* binary) {
    this->binary = new unsigned char [this->getSize()];
    for (int i=0; i<this->getSize(); i++)
        this->binary[i] = binary[i];
}

