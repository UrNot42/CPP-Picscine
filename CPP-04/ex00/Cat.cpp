/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 04:59:35 by ulevallo          #+#    #+#             */
/*   Updated: 2024/01/31 06:54:59 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal::Animal() {
	std::cout << "Cat Default constructor called" << std::endl;
	this->type = "Cat";
}

Cat::Cat( const Cat &other ) : Animal::Animal(other) {
	std::cout << "Cat Copy constructor called" << std::endl;
	this->type = other.type;
}

Cat::~Cat() {
	std::cout << "Cat Destructor called" << std::endl;
}

Cat &	Cat::operator=( const Cat &other ) {
	std::cout << "Cat Copy assignment operator called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return *this;
}

void Cat::makeSound() const {
	std::cout << "Meow Moew Woem Woem... WOOSH MAAAAAAAAAAAAAAW" << std::endl;
}
