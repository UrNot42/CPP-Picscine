/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 02:03:00 by ulevallo          #+#    #+#             */
/*   Updated: 2024/01/31 02:34:05 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap()  : ClapTrap::ClapTrap("FragTrap") {
	std::cout << "FragTrap Default constructor called" << std::endl;

	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap( std::string name ) : ClapTrap::ClapTrap(name) {
	std::cout << "FragTrap Constructor called for " << name << std::endl;

	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap( const FragTrap &other ) {
	std::cout << "FragTrap Copy constructor called" << std::endl;

	_name = other._name;
	_hitPoints = other._hitPoints;
	_energyPoints = other._energyPoints;
	_attackDamage = other._attackDamage;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap Destructor called" << std::endl;
}

FragTrap &	FragTrap::operator=( const FragTrap &other ) {
	std::cout << "FragTrap Copy assignment operator called" << std::endl;

	if (this != &other)
	{
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
	}
	return *this;
}

void FragTrap::highFivesGuys(void) {
	std::cout << "Hey Guys! HighFive ?" << std::endl;
	std::cout << "." << std::endl;
	std::cout << ".." << std::endl;
	std::cout << "..." << std::endl;
	std::cout << "[*Loud Silence*]" << std::endl;
}
