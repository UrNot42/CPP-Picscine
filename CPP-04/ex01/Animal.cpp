/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 04:55:43 by ulevallo          #+#    #+#             */
/*   Updated: 2024/08/01 20:22:22 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type( "Nallimal" ) {
	std::cout << "Animal Default constructor called" << std::endl;
}

Animal::Animal( const Animal & other ) {
	std::cout << "Animal Copy constructor called" << std::endl;
	this->type = other.type;
}

Animal::~Animal() {
	std::cout << "Animal Destructor called" << std::endl;
}

Animal & Animal::operator=( const Animal & other ) {
	std::cout << "Animal Copy assignment operator called" << std::endl;
	if ( this != &other ) {
		this->type = other.type;
	}
	return *this;
}

void Animal::makeSound() const {
	std::cout << "*Animal Noise*" << std::endl;
}

std::string Animal::getType() const {
	return this->type;
}
