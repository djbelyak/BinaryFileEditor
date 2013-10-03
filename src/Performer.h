#include <string>
#include <vector>
#include <exception>
using namespace std;

#ifndef __Performer_h__
#define __Performer_h__

// #include "FileReader.h"
// #include "FileWriter.h"

namespace BinaryFileEditor
{
	class FileReader;
	class FileWriter;
	class Performer;
}

namespace BinaryFileEditor
{
	class Performer
	{
		private: long size;
		private: byte* binary;
		BinaryFileEditor::FileReader* reader;
		BinaryFileEditor::FileWriter* writer;
		BinaryFileEditor::FileWriter* unnamed_FileWriter_;

		public: int readFile(string fileName);

		public: int writeFile(string fileName);

		public: void moveLeft(bool bit);

		public: void moveRight(bool bit);

		public: void mod2(byte bits);

		public: long getSize();

		public: byte* getBinary();
	};
}

#endif
