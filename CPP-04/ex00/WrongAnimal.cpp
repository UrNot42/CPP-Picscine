/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 04:55:43 by ulevallo          #+#    #+#             */
/*   Updated: 2024/08/01 20:22:10 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type( "Nallimal" ) {
	std::cout << "WrongAnimal Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal & other ) {
	std::cout << "WrongAnimal Copy constructor called" << std::endl;
	this->type = other.type;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal Destructor called" << std::endl;
}

WrongAnimal & WrongAnimal::operator=( const WrongAnimal & other ) {
	std::cout << "WrongAnimal Copy assignment operator called" << std::endl;
	if ( this != &other ) {
		this->type = other.type;
	}
	return *this;
}

void WrongAnimal::makeSound() const {
	std::cout << "*Wrong Animal Noise*" << std::endl;
}

std::string WrongAnimal::getType() const {
	return this->type;
}
