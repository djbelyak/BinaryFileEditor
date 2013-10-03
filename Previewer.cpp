#include <string>
#include <vector>
#include <exception>
using namespace std;

#include "Previewer.h"
#include "Performer.h"

void BinaryFileEditor::Previewer::show() {
	throw "Not yet implemented";
}

void BinaryFileEditor::Previewer::moveUp() {
	throw "Not yet implemented";
}

void BinaryFileEditor::Previewer::moveDown() {
	throw "Not yet implemented";
}

void BinaryFileEditor::Previewer::readFile() {
	throw "Not yet implemented";
}

void BinaryFileEditor::Previewer::writeFile() {
	throw "Not yet implemented";
}

void BinaryFileEditor::Previewer::setSystemBase(int systemBase) {
	this->systemBase = systemBase;
}

void BinaryFileEditor::Previewer::setWidth(int width) {
	this->width = width;
}

void BinaryFileEditor::Previewer::setHigh(int high) {
	this->high = high;
}

void BinaryFileEditor::Previewer::setMenu(string* menu) {
	this->menu = menu;
}

