/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 11:38:23 by ulevallo          #+#    #+#             */
/*   Updated: 2024/08/01 20:24:15 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	std::cout << "MateriaSource Default constructor called" << std::endl;
	for ( unsigned int i = 0; i < 4; i++ ) {
		this->_spells[i] = NULL;
	}
}

MateriaSource::MateriaSource( const MateriaSource & other ) {
	std::cout << "MateriaSource Copy constructor called" << std::endl;
	if ( this != &other ) {
		for ( unsigned int i = 0; i < 4; i++ ) {
			if ( other._spells[i] ) {
				this->_spells[i] = other._spells[i]->clone();
			} else {
				this->_spells[i] = NULL;
			}
		}
	}
}

MateriaSource & MateriaSource::operator=( const MateriaSource & other ) {
	std::cout << "MateriaSource Copy assignment operator called" << std::endl;
	if ( this != &other ) {
		for ( unsigned int i = 0; i < 4; i++ ) {
			if ( other._spells[i] ) {
				this->_spells[i] = other._spells[i]->clone();
			} else {
				this->_spells[i] = NULL;
			}
		}
	}
	return *this;
}

MateriaSource::~MateriaSource() {
	std::cout << "MateriaSource Destructor called" << std::endl;
	for ( unsigned int i = 0; i < 4; i++ ) {
		if ( this->_spells[i] ) {
			delete this->_spells[i];
		}
	}
}

void MateriaSource::learnMateria( AMateria * m ) {
	unsigned int i = 0;
	if ( ! m ) {
		return;
	}
	while ( i < 4 && this->_spells[i] != NULL ) {
		i++;
	}
	if ( i < 4 ) {
		this->_spells[i] = m;
	} else {
		delete m;
	}
}

AMateria * MateriaSource::createMateria( const std::string & type ) {
	for ( unsigned int i = 0; i < 4; i++ ) {
		if ( this->_spells[i] && this->_spells[i]->getType() == type ) {
			return this->_spells[i]->clone();
		}
	}
	return 0;
}

void MateriaSource::displayModels() {
	if ( this->_spells[0] ) {
		std::cout << "Slot [1]: " << this->_spells[0]->getType() << std::endl;
	}
	if ( this->_spells[1] ) {
		std::cout << "Slot [2]: " << this->_spells[1]->getType() << std::endl;
	}
	if ( this->_spells[2] ) {
		std::cout << "Slot [3]: " << this->_spells[2]->getType() << std::endl;
	}
	if ( this->_spells[3] ) {
		std::cout << "Slot [4]: " << this->_spells[3]->getType() << std::endl;
	}
}
