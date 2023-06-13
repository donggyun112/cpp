#include <iostream>
#include <string>
#include <fstream>
void	replaceInfile(std::string filename, std::string s1, std::string s2) {
	std::ifstream openFile(filename);

	if (openFile.fail()) {
		std::cerr << "Error opening input file: " << filename << std::endl;
        return ;
	}

	std::string outFileName = filename + ".replace";
	std::ofstream outFile(outFileName);
	if (outFile.fail()) {
		std::cerr << "Error opening output file: " << outFile << std::endl;
		openFile.close();
		return ;
	}
	std::string line;
	size_t	st = 0, en = 0;

	while (std::getline(openFile, line)) {
		while ((en = line.find(s1, st)) != std::string::npos) {
            line.erase(en, s1.length());
            line.insert(en, s2);
            st = en + s2.length();
        }
		outFile << line + "\n";
	}
}

int main(int ac, char **av)
{

	if (ac != 4) {
		std::cout << "bad arguments" << std::endl;
		return (1);
	}

	std::string fileName = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];

	replaceInfile(fileName, s1, s2);
	return (0);
}