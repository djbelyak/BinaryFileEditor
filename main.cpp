#include <iostream>

#include "FileReader.h"
#include "FileWriter.h"

using namespace std;

int main()
{
    BinaryFileEditor::FileReader* fr = new BinaryFileEditor::FileReader();
    BinaryFileEditor::FileWriter* fw = new BinaryFileEditor::FileWriter();

    string frn;
    frn.append("/home/djbelyak/a.out");
    fr->setFileName(frn);
    string fwn;
    fwn.append("/home/djbelyak/b.out");
    fw->setFileName(fwn);

    if (fr->readFile() == 0) {
        fw->setSize(fr->getSize());
        fw->setBinary(fr->getBinary());
        fw->writeFile();

    }


    delete fw;
    delete fr;

    return 0;
}

