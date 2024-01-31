/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 04:59:35 by ulevallo          #+#    #+#             */
/*   Updated: 2024/01/31 12:10:50 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal::Animal() {
	std::cout << "Cat Default constructor called" << std::endl;
	this->type = "Cat";
	this->blob = new Brain();
}

Cat::Cat( const Cat &other ) : Animal::Animal(other) {
	std::cout << "Cat Copy constructor called" << std::endl;
	this->type = other.type;
	this->blob = new Brain();
	this->blob->copyIdeas(*other.blob);
}

Cat &	Cat::operator=( const Cat &other ) {
	std::cout << "Cat Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->type = other.type;
		this->blob->copyIdeas(*other.blob);
	}
	return *this;
}

Cat::~Cat() {
	std::cout << "Cat Destructor called" << std::endl;
	delete	this->blob;
}

void Cat::makeSound() const {
	std::cout << "Meow Moew Woem Woem... WOOSH MAAAAAAAAAAAAAAW" << std::endl;
}

Brain*	Cat::getBrain() {
	return	this->blob;
}
