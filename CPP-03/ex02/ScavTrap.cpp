/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 00:54:39 by ulevallo          #+#    #+#             */
/*   Updated: 2024/01/31 02:30:30 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap::ClapTrap("ScavTrap") {
	std::cout << "ScavTrap Default constructor called" << std::endl;

	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap::ClapTrap(name) {
	std::cout << "ScavTrap Constructor called for " << name << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap( const ScavTrap &other )
{
	std::cout << "ScavTrap Copy constructor called" << std::endl;

	_name = other._name;
	_hitPoints = other._hitPoints;
	_energyPoints = other._energyPoints;
	_attackDamage = other._attackDamage;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called for " << this->_name << std::endl;
}

ScavTrap &	ScavTrap::operator=( const ScavTrap &other ) {
	std::cout << "ScavTrap Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
	}
	return *this;
}

void ScavTrap::attack( const std::string& target ) {
	std::cout << "ScavTrap " << this->_name << " hit " << target << " for " << this->_attackDamage << "DMG"<< std::endl;
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode" << std::endl;
}
