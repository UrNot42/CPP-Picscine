/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 04:55:43 by ulevallo          #+#    #+#             */
/*   Updated: 2024/08/01 20:23:03 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : type( "Nallimal" ) {
	std::cout << "AAnimal Default constructor called" << std::endl;
}

AAnimal::AAnimal( const AAnimal & other ) {
	std::cout << "AAnimal Copy constructor called" << std::endl;
	this->type = other.type;
}

AAnimal::~AAnimal() {
	std::cout << "AAnimal Destructor called" << std::endl;
}

AAnimal & AAnimal::operator=( const AAnimal & other ) {
	std::cout << "AAnimal Copy assignment operator called" << std::endl;
	if ( this != &other ) {
		this->type = other.type;
	}
	return *this;
}

std::string AAnimal::getType() const {
	return this->type;
}
