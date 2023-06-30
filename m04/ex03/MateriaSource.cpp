
#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	std::cout << "MateriaSource structor called" << std::endl;
	for (int i = 0; i < 4; i++) {
		learnedMaterias[i] = NULL;
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other) {
	std::cout << "Character Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		for (int i = 0; i < 4; i++) {

			delete learnedMaterias[i];
			if (other.learnedMaterias[i] == NULL) {
				learnedMaterias[i] = NULL;
			} else {
				learnedMaterias[i] = other.learnedMaterias[i]->clone();
			}
		}
	}
	return (*this);
}

MateriaSource::MateriaSource(const MateriaSource& other) {
	std::cout << "MateriaSource Copy constructor called" << std::endl;
	if (this != &other)
	{
		for (int i = 0; i < 4; i++) {

			if (other.learnedMaterias[i] == NULL) {
				learnedMaterias[i] = NULL;
			}
			else {
				learnedMaterias[i] = other.learnedMaterias[i]->clone();
			}
		}
	}	
}

void MateriaSource::learnMateria(AMateria* m) {
	for (int i = 0; i < 4; i++) {
		if (learnedMaterias[i] == NULL) {
			std::cout << "learn " << m->getType() << std::endl;
			learnedMaterias[i] = m->clone();
			break ;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < 4; i++) {
		if (learnedMaterias[i] != NULL && learnedMaterias[i]->getType() == type)
			return (learnedMaterias[i]->clone());
	}
	return (NULL);
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++) {
		delete learnedMaterias[i];	
	}
	std::cout << "AMateria Destructor called" << std::endl;
}