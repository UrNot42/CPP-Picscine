/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 18:57:09 by ulevallo          #+#    #+#             */
/*   Updated: 2024/01/29 13:18:40 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& equipement) : name(name), equipement(equipement) {}

void	HumanA::attack() {
	std::cout << this->name << " attacks with their " << this->equipement.getType() << std::endl;
}
