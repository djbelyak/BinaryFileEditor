#include <string>
#include <vector>
#include <exception>
using namespace std;

#include "FileWriter.h"
#include "Performer.h"

BinaryFileEditor::FileWriter::FileWriter() {

}

BinaryFileEditor::FileWriter::~FileWriter() {

}

int BinaryFileEditor::FileWriter::writeFile() {
	throw "Not yet implemented";
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

void BinaryFileEditor::FileWriter::setBinary(unsigned char* binary) {
	this->binary = binary;
}

