#include <string>
#include <vector>
#include <exception>
#include <stdio.h>
#include <iostream>
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
		private: int width;
		private: int high;
        private: string menu;
        public: BinaryFileEditor::Performer* preformer;

        public: Previewer();
        public: ~Previewer();

		public: void show();

		public: void moveUp();

		public: void moveDown();

        public: void moveLeft();

        public: void moveRight();

		public: void readFile();

		public: void writeFile();

        public: void mod2();

		public: void setWidth(int width);

		public: void setHigh(int high);

        public: void setMenu(string menu);
	};
}

#endif
