/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:55:45 by ulevallo          #+#    #+#             */
/*   Updated: 2024/08/01 20:11:36 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : name( "default zombie" ) {
	std::cout << "Created " << this->name << std::endl;
}

Zombie::Zombie( std::string name ) : name( name ) {
	std::cout << "Created " << this->name << std::endl;
}

Zombie::~Zombie() {
	std::cout << "Destroyed " << this->name << std::endl;
}

void Zombie::announce() {
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName( std::string name ) {
	this->name = name;
}
