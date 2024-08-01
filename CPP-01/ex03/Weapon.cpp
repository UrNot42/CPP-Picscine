/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 18:42:13 by ulevallo          #+#    #+#             */
/*   Updated: 2024/08/01 20:14:02 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type ) : type( type ) {}

const std::string & Weapon::getType() {
	const std::string & typeREF = this->type;
	return typeREF;
}

void Weapon::setType( std::string newType ) {
	this->type = newType;
}
