#include <string>
#include <vector>
#include <exception>
using namespace std;

#include "Performer.h"
#include "FileReader.h"
#include "FileWriter.h"


BinaryFileEditor::Performer::Performer() {
    this->reader = new BinaryFileEditor::FileReader();
    this->writer = new BinaryFileEditor::FileWriter();
    this->binary = NULL;
}

BinaryFileEditor::Performer::~Performer() {
    delete this->reader;
    delete this->writer;
    if (this->binary != NULL)
        delete[] this->binary;
}

int BinaryFileEditor::Performer::readFile(string fileName) {
    this->reader->setFileName(fileName);
    int status;
    if ((status=this->reader->readFile()) == 0) {
        this->size = this->reader->getSize();
        this->binary = new unsigned char[this->getSize()];
        for (int i=0; i<this->getSize(); i++)
            this->binary[i]=this->reader->getBinary()[i];
    }
    return status;
}

int BinaryFileEditor::Performer::writeFile(string fileName) {
    this->writer->setFileName(fileName);
    this->writer->setSize(this->getSize());
    this->writer->setBinary(this->getBinary());
    return this->writer->writeFile();
}

void BinaryFileEditor::Performer::moveLeft(void) {
    for (int i=0; i<this->getSize(); i++)
        this->binary[i] <<= 1;
}

void BinaryFileEditor::Performer::moveRight(void) {
    for (int i=0; i<this->getSize(); i++)
        this->binary[i] >>= 1;
}

void BinaryFileEditor::Performer::mod2(unsigned char bits) {
    for (int i=0; i<this->getSize(); i++)
        this->binary[i] ^= bits;
}

long BinaryFileEditor::Performer::getSize() {
	return this->size;
}

unsigned char* BinaryFileEditor::Performer::getBinary() {
	return this->binary;
}

