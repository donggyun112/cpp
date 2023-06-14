#include "Harl.hpp"

Harl::Harl() {

}

Harl::~Harl() {
	
}

void Harl::complain(std::string level) {
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	int index;
	for (index = 0; index < 4; index++) {
		if (levels[index] == level) {
			break ;
		}
	}

	switch (index)
	{
		case 0:
			this->debug();
			std::cout << std::endl;
		case 1:
			this->info();
			std::cout << std::endl;
		case 2:
			this->warning();
			std::cout << std::endl;
		case 3:
			this->error();
			std::cout << std::endl;
			break ;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break;
	}
}

void Harl::debug() {
	std::cout << "\033[0;31m[ DEBUG ]\033[0;39m" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger." << std::endl;
	std::cout << "I really do!" << std::endl;
}

void Harl::info() {
	std::cout << "\033[0;31m[ INFO ]\033[0;39m" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
	std::cout << "You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning() {
	std::cout << "\033[0;31m[ WARNING ]\033[0;39m" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." <<std::endl;
	std::cout << "I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error() {
	std::cout << "\033[0;31m[ ERROR ]\033[0;39m" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}