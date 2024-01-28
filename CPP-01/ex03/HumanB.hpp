/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 18:57:39 by ulevallo          #+#    #+#             */
/*   Updated: 2024/01/28 19:33:59 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"

class HumanB {
public:
	HumanB(std::string name);
	void	setWeapon(Weapon &equipement);
	void	attack();
private:
	std::string	name;
	Weapon*	equipement;
};
