/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 18:57:09 by ulevallo          #+#    #+#             */
/*   Updated: 2024/01/28 19:33:41 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), equipement(NULL) {}

void	HumanB::attack() {
	std::string	tool;

	if (this->equipement)
		tool = this->equipement->getType();
	else
		tool = "wife's baby filled with grenade";
	std::cout << this->name << " attacks with their " << tool << std::endl;
}

void	HumanB::setWeapon(Weapon &newEquipement) {
	this->equipement = &newEquipement;
}
