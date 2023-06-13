#include "Harl.hpp"

Harl::Harl() {

}

Harl::~Harl() {
	
}

void Harl::complain(std::string level) {
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*f[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (int i = 0; i < 4; i++) {
		if (levels[i] == level) {
			(this->*f[i])();
			break ;
		}
	}
}

void Harl::debug() {
	std::cout << "\033[0;31mDEBUG:\033[0;39m I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info() {
	std::cout << "\033[0;31mINFO:\033[0;39m I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning() {
	std::cout << "\033[0;31mWARNING:\033[0;39m I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error() {
	std::cout << "\033[0;31mERROR:\033[0;39m This is unacceptable! I want to speak to the manager now." << std::endl;
}