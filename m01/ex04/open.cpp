#include "open.hpp"

int open::openCheak(char *fileName) {
	readFile.open(fileName);
	if (readFile.fail())
		return (1);
	return (0);
}

bool	open::setS1(std::string newS1) {
	s1 = newS1;
	if (s1.length() <= 0) {
		std::cout << "Invalid string" << std::endl;
		return (false);
	}
	return (true);
}

bool	open::setS2(std::string newS2) {
	s2 = newS2;
	if (s2.length() <= 0) {
		std::cout << "Invalid string" << std::endl;
		return (false);
	}
	return (true);
}