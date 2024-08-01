/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 04:59:35 by ulevallo          #+#    #+#             */
/*   Updated: 2024/08/01 20:22:15 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal::WrongAnimal() {
	std::cout << "WrongCat Default constructor called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat( const WrongCat & other ) : WrongAnimal::WrongAnimal( other ) {
	std::cout << "WrongCat Copy constructor called" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat Destructor called" << std::endl;
}

WrongCat & WrongCat::operator=( const WrongCat & other ) {
	std::cout << "WrongCat Copy assignment operator called" << std::endl;
	if ( this != &other ) {
		this->type = other.type;
	}
	return *this;
}

void WrongCat::makeSound() const {
	std::cout << "Wrong Meow Moew Woem Woem... WOOSH MAAAAAAAAAAAAAAW" << std::endl;
}
