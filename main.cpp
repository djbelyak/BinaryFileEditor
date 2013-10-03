#include <iostream>

#include "FileReader.h"

using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    BinaryFileEditor::FileReader* fr = new BinaryFileEditor::FileReader();
    string filename;
    filename.append("/home/djbelyak/1.py");
    fr->setFileName(filename);
    if (fr->readFile() == 0) {
        for (int i=0; i<fr->getSize(); i++)
            cout << fr->getBinary()[i];
    }
    return 0;
}

