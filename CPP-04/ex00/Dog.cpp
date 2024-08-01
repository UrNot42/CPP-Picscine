/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 05:01:09 by ulevallo          #+#    #+#             */
/*   Updated: 2024/08/01 20:22:00 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal::Animal() {
	std::cout << "Dog Default constructor called" << std::endl;
	this->type = "Dog";
}

Dog::Dog( const Dog & other ) : Animal::Animal( other ) {
	std::cout << "Dog Copy constructor called" << std::endl;
	this->type = other.type;
}

Dog::~Dog() {
	std::cout << "Dog Destructor called" << std::endl;
}

Dog & Dog::operator=( const Dog & other ) {
	std::cout << "Dog Copy assignment operator called" << std::endl;
	if ( this != &other ) {
		this->type = other.type;
	}
	return *this;
}

void Dog::makeSound() const {
	std::cout << "BAAARK baark bwark BAKBAKBKARK WOOOAF WOOOF WOOOAEEEEF WEEF" << std::endl;
}
