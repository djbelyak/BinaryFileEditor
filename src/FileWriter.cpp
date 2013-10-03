#include <string>
#include <vector>
#include <exception>
using namespace std;

#include "FileWriter.h"
#include "Performer.h"

int BinaryFileEditor::FileWriter::writeFile() {
	throw "Not yet implemented";
}

void BinaryFileEditor::FileWriter::setFileName(string fileName) {
	this->fileName = fileName;
}

void BinaryFileEditor::FileWriter::setSize(long size) {
	this->size = size;
}

long BinaryFileEditor::FileWriter::getSize() {
	return this->size;
}

void BinaryFileEditor::FileWriter::setBinary(byte* binary) {
	this->binary = binary;
}

