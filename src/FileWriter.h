#include <string>
#include <vector>
#include <exception>
using namespace std;

#ifndef __FileWriter_h__
#define __FileWriter_h__

// #include "Performer.h"

namespace BinaryFileEditor
{
	class Performer;
	class FileWriter;
}

namespace BinaryFileEditor
{
	class FileWriter
	{
		private: string fileName;
		private: long size;
		private: byte* binary;
		BinaryFileEditor::Performer* unnamed_Performer_;

		public: int writeFile();

		public: void setFileName(string fileName);

		public: void setSize(long size);

		public: long getSize();

		public: void setBinary(byte* binary);
	};
}

#endif
