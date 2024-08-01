/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:02:07 by ulevallo          #+#    #+#             */
/*   Updated: 2024/08/01 20:17:24 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name( "ClapTrap" ), _hitPoints( 10 ), _energyPoints( 10 ), _attackDamage( 0 ) {
	std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap( std::string name ) : _name( name ), _hitPoints( 10 ), _energyPoints( 10 ), _attackDamage( 0 ) {
	std::cout << "ClapTrap Constructor called for " << name << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap & other ) {
	std::cout << "ClapTrap Copy constructor called" << std::endl;
	this->_name			= other._name;
	this->_hitPoints	= other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap Destructor called for " << this->_name << std::endl;
}

ClapTrap & ClapTrap::operator=( const ClapTrap & other ) {
	std::cout << "ClapTrap Copy assignment operator called" << std::endl;
	if ( this != &other ) {
		this->_name			= other._name;
		this->_hitPoints	= other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	return *this;
}

std::string ClapTrap::getName() {
	return this->_name;
}

void ClapTrap::useEnergy() {
	this->_energyPoints--;
	std::cout << "(Used 1 energy point: " << this->_energyPoints << " left) ->" << std::endl;
}

void ClapTrap::attack( const std::string & target ) {
	std::cout << "ClapTrap " << this->_name << " hit " << target << " for " << this->_attackDamage << "DMG"
			  << std::endl;
}

void ClapTrap::takeDamage( unsigned int amount ) {
	if ( this->_energyPoints <= 0 ) {
		std::cout << "Not enough Energy points ( " << this->_energyPoints << " )" << std::endl;
		return;
	}
	this->useEnergy();
	this->_hitPoints -= amount;
	std::cout << "ClapTrap " << this->_name << " took " << amount << "DMG [ " << this->_hitPoints + amount << " -> "
			  << this->_hitPoints << " ]" << std::endl;
}

void ClapTrap::beRepaired( unsigned int amount ) {
	if ( this->_energyPoints <= 0 ) {
		std::cout << "Not enough Energy points ( " << this->_energyPoints << " )" << std::endl;
		return;
	}
	this->useEnergy();
	this->_hitPoints += amount;
	std::cout << "ClapTrap " << this->_name << " repaired itself for " << amount << "HP [ " << this->_hitPoints - amount
			  << " -> " << this->_hitPoints << " ]" << std::endl;
}
