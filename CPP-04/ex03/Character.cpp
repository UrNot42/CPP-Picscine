/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 11:21:57 by ulevallo          #+#    #+#             */
/*   Updated: 2024/01/31 16:32:45 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

void	Character::copyInventory(AMateria**	newInventory) {
	AMateria *temp;

	for (unsigned int i = 0; i < 4; i++) {
		if (newInventory[i] != NULL)
		{
			temp = newInventory[i]->clone();
			delete newInventory[i];
			this->_inventory[i] = temp;
		}
	}
}

Character::Character() : _name("Default"), _inventory() {
	std::cout << "Character Default constructor called" << std::endl;
}

Character::Character( std::string name ) : _name(name), _inventory() {
	std::cout << "Character Constructor called for " << name << std::endl;
}

Character::Character( const Character &other ) : _name(other._name){
	std::cout << "Character Copy constructor called" << std::endl;
	this->copyInventory((AMateria**)(other._inventory));
}

Character &	Character::operator=( const Character &other ) {
	std::cout << "Character Copy assignment operator called" << std::endl;
	if (this != &other)
		this->copyInventory((AMateria**)(other._inventory));
	return *this;
}

Character::~Character() {
	std::cout << "Character Destructor called" << std::endl;
	for (unsigned int i = 0; i < 4; i++) {
		if (this->_inventory[i] != NULL)
			delete this->_inventory[i];
	}
}

std::string const & Character::getName() const {
	return this->_name;
}

AMateria* const & Character::getInventory() const{
	return *this->_inventory;
}

void Character::equip(AMateria* m) {
	unsigned int i = 0;
	while (i < 4 && this->_inventory[i] != NULL) {i++;}
	if (i < 4)
		this->_inventory[i] = m;
}

void Character::unequip(int idx) {
	if (idx >=0 && idx <=3)
		this->_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target) {
	this->_inventory[idx]->use( target );
}
