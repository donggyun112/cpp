#include <iostream>
#include "phonebook.hpp"

class command_accse
{
private:
	std :: string data;
public:
	for (int i = 0; i < NUM_FIELDS; i++)
	{
		std :: cout << info[i] << ": ";
		std::getline(std :: cin, data, '\n');
		if (i == 3 && check_data(data))
		{
			i--;
			std::cout << "It's not a number\n";
			continue;
		}
		info_box[j][i] = data;
	}
};
