#include <string>
#include <vector>
#include <exception>
using namespace std;

#ifndef __Previewer_h__
#define __Previewer_h__

// #include "Performer.h"

namespace BinaryFileEditor
{
	class Performer;
	class Previewer;
}

namespace BinaryFileEditor
{
	class Previewer
	{
		private: long offset;
		private: int systemBase;
		private: int width;
		private: int high;
		private: string* menu;
		BinaryFileEditor::Performer* preformer;

		public: void show();

		public: void moveUp();

		public: void moveDown();

		public: void readFile();

		public: void writeFile();

		public: void setSystemBase(int systemBase);

		public: void setWidth(int width);

		public: void setHigh(int high);

		public: void setMenu(string* menu);
	};
}

#endif
