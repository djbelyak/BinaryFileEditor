//============================================================================
// Name        : BinaryFileEditor.cpp
// Author      : Elka-vt
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>


using namespace std;

int main()
{

	ifstream input("BOOKINFO.DAT");
	char first[64];
	input >> first;
	cout << first << endl;

}
