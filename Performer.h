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
		private: unsigned char* binary;
		BinaryFileEditor::FileReader* reader;
		BinaryFileEditor::FileWriter* writer;

        public: Performer();

        public: ~Performer();

		public: int readFile(string fileName);

		public: int writeFile(string fileName);

        public: void moveLeft(void);

        public: void moveRight(void);

		public: void mod2(unsigned char bits);

		public: long getSize();

		public: unsigned char* getBinary();
	};
}

#endif
