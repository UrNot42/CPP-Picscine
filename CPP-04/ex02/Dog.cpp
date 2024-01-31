/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 05:01:09 by ulevallo          #+#    #+#             */
/*   Updated: 2024/01/31 07:14:39 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : AAnimal::AAnimal() {
	std::cout << "Dog Default constructor called" << std::endl;
	this->type = "Dog";
	this->blob = new Brain();
}

Dog::Dog( const Dog &other ) : AAnimal::AAnimal(other) {
	std::cout << "Dog Copy constructor called" << std::endl;
	this->type = other.type;
	this->blob->copyIdeas(*other.blob);
}

Dog &	Dog::operator=( const Dog &other ) {
	std::cout << "Dog Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->type = other.type;
		this->blob->copyIdeas(*other.blob);
	}
	return *this;
}

Dog::~Dog() {
	std::cout << "Dog Destructor called" << std::endl;
	delete	this->blob;
}

void Dog::makeSound() const {
	std::cout << "BAAARK baark bwark BAKBAKBKARK WOOOAF WOOOF WOOOAEEEEF WEEF" << std::endl;
}

Brain*	Dog::getBrain() {
	return	this->blob;
}
