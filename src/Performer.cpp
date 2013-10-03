#include <string>
#include <vector>
#include <exception>
using namespace std;

#include "Performer.h"
#include "FileReader.h"
#include "FileWriter.h"

int BinaryFileEditor::Performer::readFile(string fileName) {
	throw "Not yet implemented";
}

int BinaryFileEditor::Performer::writeFile(string fileName) {
	throw "Not yet implemented";
}

void BinaryFileEditor::Performer::moveLeft(bool bit) {
	throw "Not yet implemented";
}

void BinaryFileEditor::Performer::moveRight(bool bit) {
	throw "Not yet implemented";
}

void BinaryFileEditor::Performer::mod2(byte bits) {
	throw "Not yet implemented";
}

long BinaryFileEditor::Performer::getSize() {
	return this->size;
}

byte* BinaryFileEditor::Performer::getBinary() {
	return this->binary;
}

