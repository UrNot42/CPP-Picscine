/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 00:54:39 by ulevallo          #+#    #+#             */
/*   Updated: 2024/01/31 03:37:47 by ulevallo         ###   ########.fr       */
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

	this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called for " << this->_name << std::endl;
}

ScavTrap &	ScavTrap::operator=( const ScavTrap &other ) {
	std::cout << "ScavTrap Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	return *this;
}

void ScavTrap::attack( const std::string& target ) {
	std::cout << "ScavTrap " << this->_name << " hit " << target << " for " << this->_attackDamage << "DMG"<< std::endl;
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode" << std::endl;
}
