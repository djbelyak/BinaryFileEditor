#include <iostream>

#include "Performer.h"

using namespace std;

int main()
{
    BinaryFileEditor::Performer* p = new BinaryFileEditor::Performer();

    string frn;
    frn.append("/home/djbelyak/a.out");
    p->readFile(frn);
    p->moveLeft();
    p->moveRight();
    string fwn;
    fwn.append("/home/djbelyak/c.out");
    p->writeFile(fwn);


    delete p;

    return 0;
}

