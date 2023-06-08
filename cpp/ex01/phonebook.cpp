/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongkseo <student.42seoul.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 00:05:35 by dongkseo          #+#    #+#             */
/*   Updated: 2023/06/08 03:19:51 by dongkseo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <string>

std :: string info_box[8][5];

void	select_info()
{
	std :: string info[5] = {
		"first name  ",
		"last name   ",
		"nick name   ",
		"phone number",
		"secret      "
	};
	std::string str;
	std::cout<<"Find Info : ";
	std::cin>>str;
	if (std::cin.eof() || std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore();
		return ;
	}
	int	num = std :: atoi(str.c_str());
	if (num < 0 || num > size - 1 || std :: to_string(num) != str)
	{
		std::cout << "INVALID VALUE\n";
		std::cin.ignore();
		select_info();
		return ;
	}
	std::cout<<"------------------------\n";
	for (int i = 0; i < 5; i++)
	{
		std::cout << info[i] << " : ";
		std :: cout << info_box[num][i] << "\n";
	}
	std::cin.ignore();
}

void	print_info()
{
	if (size > 8)
		size = 8;
	std :: cout << "--------------------------------------------\n";
	std :: cout << "     index|first name| last name| nick name|\n";
	std :: cout << "--------------------------------------------\n";
	for (int i = 0; i < size; i++)
	{
		std :: cout << "         " << i << "|";
		for (int j = 0; j < 3; j++)
		{
			if (info_box[i][j].length() > 10)
				info_box[i][j] = info_box[i][j].substr(0, 9) + ".";
			else
				for (unsigned long x = 0; x < 10 - info_box[i][j].length(); x++)
					std :: cout << " ";
			std :: cout << info_box[i][j] << "|";
		}
		std :: cout << std :: endl;
	}
	std :: cout << "--------------------------------------------\n";
	select_info();
}

int	check_data(std :: string str)
{
	for (unsigned long x = 0; x < str.length(); x++)
	{
		if (!isdigit(str[x]))
			if (str[x] != 32)
				return (1);
	}
	return (0);
}

int main(void)
{
	std :: string info[5] = {
		"first name",
		"last name",
		"nick name",
		"phone number",
		"secret"
	};

	while (1)
	{
		std :: string cmd;
		std :: cout << "command(ADD/SEARCH/EXIT) : ";
		std :: getline(std :: cin, cmd, '\n');
		if (std::cin.eof() || std::cin.fail())
			break ;
		if (cmd == "EXIT")
			return (0);
		if (cmd == "ADD")
		{
			std :: string data;
			for (int i = 0; i < NUM_FIELDS; i++)
			{
				std :: cout << info[i] << ": ";
				std :: getline(std :: cin, data, '\n');
				if (i == 3 && check_data(data))
				{
					i--;
					std::cout << "It's not a number\n";
					continue;
				}
				info_box[j][i] = data;
			}
			j++;
			size++;
		}
		if (cmd == "SEARCH" && size > 0)
			print_info();
		else if (cmd == "SEARCH" && size <= 0)
			std::cout<<"no information available\n";
		j = j % 8;
	}
	return (0);
}