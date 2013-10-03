#include <string>
#include <vector>
#include <exception>
#include <iostream>
#include <fstream>

using namespace std;

#ifndef __FileReader_h__
#define __FileReader_h__

namespace BinaryFileEditor
{
	class FileReader;
}

namespace BinaryFileEditor
{
	class FileReader
	{
		private: string fileName;
        private: long size;
		private: unsigned char* binary;

		public: FileReader();

        public: ~FileReader();

		public: int readFile();

		public: void setFileName(string fileName);

		public: const string getFileName();

		public: const long getSize();

		public: unsigned char* getBinary();
	};
}

#endif
