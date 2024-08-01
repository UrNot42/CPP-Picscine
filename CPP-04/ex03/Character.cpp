/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 11:21:57 by ulevallo          #+#    #+#             */
/*   Updated: 2024/08/01 20:23:51 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

void Character::copyInventory( AMateria * otherInventory[4] ) {
	AMateria * temp;

	for ( unsigned int i = 0; i < 4; i++ ) {
		if ( otherInventory[i] ) {
			temp = otherInventory[i]->clone();
			delete otherInventory[i];
			this->_inventory[i] = temp;
		} else {
			this->_inventory[i] = NULL;
		}
	}
}

Character::Character() : _name( "Default" ), _inventory() {
	std::cout << "Character Default constructor called" << std::endl;
}

Character::Character( std::string name ) : _name( name ), _inventory() {
	std::cout << "Character Constructor called for " << name << std::endl;
}

Character::Character( const Character & other ) : _name( other._name ) {
	std::cout << "Character Copy constructor called" << std::endl;
	for ( unsigned int i = 0; i < 4; i++ ) {
		if ( other._inventory[i] ) {
			this->_inventory[i] = other._inventory[i]->clone();
		} else {
			this->_inventory[i] = NULL;
		}
	}
}

Character & Character::operator=( const Character & other ) {
	std::cout << "Character Copy assignment operator called" << std::endl;
	if ( this != &other ) {
		this->copyInventory( ( AMateria ** ) ( other._inventory ) );
	}
	return *this;
}

Character::~Character() {
	std::cout << "Character Destructor called" << std::endl;
	for ( unsigned int i = 4; i > 0; ) {
		i--;
		if ( this->_inventory[i] ) {
			delete this->_inventory[i];
		}
	}
}

const std::string & Character::getName() const {
	return this->_name;
}

AMateria * const & Character::getInventory() const {
	return *this->_inventory;
}

void Character::equip( AMateria * m ) {
	unsigned int i = 0;
	while ( i < 4 && this->_inventory[i] != NULL ) {
		i++;
	}
	if ( i < 4 ) {
		this->_inventory[i] = m;
	}
}

void Character::unequip( int idx ) {
	if ( idx >= 0 && idx <= 3 ) {
		this->_inventory[idx] = NULL;
	}
}

void Character::use( int idx, ICharacter & target ) {
	if ( idkidx > 4 ) {
		if ( this->_inventory[idx] ) {
			this->_inventory[idx]->use( target );
		}
	}
}

void Character::displayInventory() {
	if ( this->_inventory[0] ) {
		std::cout << "Slot [1]: " << this->_inventory[0]->getType() << std::endl;
	}
	if ( this->_inventory[1] ) {
		std::cout << "Slot [2]: " << this->_inventory[1]->getType() << std::endl;
	}
	if ( this->_inventory[2] ) {
		std::cout << "Slot [3]: " << this->_inventory[2]->getType() << std::endl;
	}
	if ( this->_inventory[3] ) {
		std::cout << "Slot [4]: " << this->_inventory[3]->getType() << std::endl;
	}
}
