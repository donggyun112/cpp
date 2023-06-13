#include <iostream>
#include <string>
#include <fstream>

class open
{
	private:
		std::ifstream readFile;
		std::string s1;
		std::string s2;
	public:
		open() {};
		int openCheak(char *fileName);
		bool setS1();
		bool setS2();
};
