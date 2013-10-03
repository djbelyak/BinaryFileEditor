#include <string>
#include <vector>
#include <exception>
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
		private: byte* binary;

		public: int readFile();

		public: void setFileName(string fileName);

		public: string getFileName();

		public: long getSize();

		public: byte* getBinary();
	};
}

#endif
