#include <string>
#include <vector>
#include <exception>
using namespace std;

#include "Previewer.h"
#include "Performer.h"

BinaryFileEditor::Previewer::Previewer() {
    this->preformer = new Performer();
    this->high = 24;
    this->width = 80;
    this->offset = 0;
    string menustr ("1 - Up; 2 - Down; 3 - Write to; 4 - Move left; 5 - Move right; 6 - Mod2; 0 - Exit");
    this->menu = menustr;
}

BinaryFileEditor::Previewer::~Previewer() {
    delete this->preformer;

}

void BinaryFileEditor::Previewer::show() {
    for (int i=0; i<high; i++) {
        for (int j=0; j<width/3; j++)
            printf("%2X ", this->preformer->getBinary()[offset+i*width/3 + j]);
        printf("\n");
    }
    cout << this->menu << endl;
}

void BinaryFileEditor::Previewer::moveUp() {
        this->offset -= width/3;

}

void BinaryFileEditor::Previewer::moveDown() {
        this->offset += width/3;
}

void BinaryFileEditor::Previewer::readFile() {
    cout<<"Please input filename for reading: ";
    string fns;
    getline(cin, fns);
    this->preformer->readFile(fns);

}

void BinaryFileEditor::Previewer::writeFile() {
    cout<<"Please input filename for writing: ";
    string fns;
    getline(cin, fns);
    this->preformer->writeFile(fns);
}


void BinaryFileEditor::Previewer::setWidth(int width) {
	this->width = width;
}

void BinaryFileEditor::Previewer::setHigh(int high) {
	this->high = high;
}

void BinaryFileEditor::Previewer::setMenu(string menu) {
	this->menu = menu;
}

void BinaryFileEditor::Previewer::moveLeft() {
    this->preformer->moveLeft();
}

void BinaryFileEditor::Previewer::moveRight() {
    this->preformer->moveRight();
}

void BinaryFileEditor::Previewer::mod2() {
    cout<<"Please input byte for mod2: ";
    unsigned char mod = cin.get();
    this->preformer->mod2(mod);
}

