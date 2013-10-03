#include <string>
#include <vector>
#include <exception>
using namespace std;

#include "FileReader.h"
int BinaryFileEditor::FileReader::readFile() {
	throw "Not yet implemented";
}

void BinaryFileEditor::FileReader::setFileName(string fileName) {
	this->fileName = fileName;
}

string BinaryFileEditor::FileReader::getFileName() {
	return this->fileName;
}

long BinaryFileEditor::FileReader::getSize() {
	return this->size;
}

byte* BinaryFileEditor::FileReader::getBinary() {
	return this->binary;
}

