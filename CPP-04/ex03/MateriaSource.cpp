/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 11:38:23 by ulevallo          #+#    #+#             */
/*   Updated: 2024/01/31 16:33:14 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : _spells() {
	std::cout << "MateriaSource Default constructor called" << std::endl;
}

MateriaSource::MateriaSource( const MateriaSource &other ) {
	std::cout << "MateriaSource Copy constructor called" << std::endl;
	AMateria *temp;

	for (unsigned int i = 0; i < 4; i++) {
		if (other._spells[i] != NULL)
		{
			temp = other._spells[i]->clone();
			delete other._spells[i];
			this->_spells[i] = temp;
		}
	}
}

MateriaSource &	MateriaSource::operator=( const MateriaSource &other ) {
	// std::cout << "MateriaSource Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		AMateria *temp;

		for (unsigned int i = 0; i < 4; i++) {
			if (other._spells[i] != NULL)
			{
				temp = other._spells[i]->clone();
				delete other._spells[i];
				this->_spells[i] = temp;
			}
		}
	}
	return *this;
}

MateriaSource::~MateriaSource() {
	std::cout << "MateriaSource Destructor called" << std::endl;
	for (unsigned int i = 0; i < 4; i++) {
		if (this->_spells[i])
			delete this->_spells[i];
	}
}

void MateriaSource::learnMateria(AMateria *m) {
	unsigned int i = 0;
	while (i < 4 && this->_spells[i] != NULL) {i++;}
	if (i < 4)
		this->_spells[i] = m;
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	AMateria *spell = NULL;
	for (unsigned int i = 0; i < 4; i++) {
		if (this->_spells[i] && this->_spells[i]->getType() == type)
			spell = this->_spells[i]->clone();
	}
	return spell;
}
