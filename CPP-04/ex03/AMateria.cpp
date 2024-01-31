/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 07:32:43 by ulevallo          #+#    #+#             */
/*   Updated: 2024/01/31 16:32:25 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _type("") {
	std::cout << "AMateria Default constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type) : _type(type) {
	std::cout << "AMateria Constructor called" << std::endl;
}

AMateria::AMateria( const AMateria &other )  : _type(other._type) {
	std::cout << "AMateria Copy constructor called" << std::endl;
}

AMateria &	AMateria::operator=( const AMateria &other ) {
	std::cout << "AMateria Copy assignment operator called" << std::endl;
	if (this != &other)
		return *this;
	return *this;
}

AMateria::~AMateria() {
	std::cout << "AMateria Destructor called" << std::endl;
}

std::string const & AMateria::getType() const {
	return this->_type;
}
