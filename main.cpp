#include <iostream>

#include "Previewer.h"

using namespace std;

int main()
{
    BinaryFileEditor::Previewer* p = new BinaryFileEditor::Previewer();

    p->readFile();

    char key = 'z';
    while(key!='0') {
        p->show();
        key = cin.get();
        switch(key)
        {
        case '1':
        {
          p->moveUp();
          break;
        }
        case '2':
        {
          p->moveDown();
          break;
        }
        case '3':
        {
          p->writeFile();
          break;
        }
        case '4':
        {
            p->moveLeft();
          break;
        }
        case '5':
        {
          p->moveRight();
          break;
        }
        case '6':
        {
          p->mod2();
          break;
        }

        case '0':
        {

        }
        }


    }


    delete p;

    return 0;
}

