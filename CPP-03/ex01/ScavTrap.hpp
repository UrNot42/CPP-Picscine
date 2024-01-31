/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 00:54:55 by ulevallo          #+#    #+#             */
/*   Updated: 2024/01/31 02:31:04 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : public ClapTrap {
	public:

		ScavTrap();
		ScavTrap( std::string name );
		ScavTrap( const ScavTrap &other );
		~ScavTrap();

		ScavTrap &	operator= ( const ScavTrap &other );
		void attack( const std::string& target );
		void guardGate();
};

#endif
