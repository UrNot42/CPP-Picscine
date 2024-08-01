/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 07:35:09 by ulevallo          #+#    #+#             */
/*   Updated: 2024/08/01 20:24:04 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria::AMateria( "ice" ) {
	std::cout << "Ice Default constructor called" << std::endl;
}

Ice::Ice( const Ice & other ) : AMateria( other._type ) {
	std::cout << "Ice Copy constructor called" << std::endl;
}

Ice & Ice::operator=( const Ice & other ) {
	std::cout << "Ice Copy assignment operator called" << std::endl;
	if ( this != &other ) {
		return *this;
	}
	return *this;
}

Ice::~Ice() {
	std::cout << "Ice Destructor called" << std::endl;
}

AMateria * Ice::clone() const {
	return new Ice( *this );
}

void Ice::use( ICharacter & target ) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
