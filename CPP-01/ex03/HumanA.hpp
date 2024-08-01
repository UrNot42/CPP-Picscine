/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 18:57:39 by ulevallo          #+#    #+#             */
/*   Updated: 2024/08/01 20:13:39 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"

class HumanA {
	public:
		HumanA( std::string name, Weapon & equipement );
		void attack();

	private:
		std::string name;
		Weapon &	equipement;
};
