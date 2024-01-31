/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 07:35:34 by ulevallo          #+#    #+#             */
/*   Updated: 2024/01/31 17:37:58 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria::AMateria("cure") {
	std::cout << "Cure Default constructor called" << std::endl;
}

Cure::Cure( const Cure &other ) : AMateria(other._type) {
	std::cout << "Cure Copy constructor called" << std::endl;
}

Cure &	Cure::operator=( const Cure &) {
	std::cout << "Cure Copy assignment operator called" << std::endl;
	return *this;
}

Cure::~Cure() {
	std::cout << "Cure Destructor called" << std::endl;
}

AMateria* Cure::clone() const {
	return new Cure(*this);
}

void Cure::use( ICharacter& target ) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
