/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:01:47 by ulevallo          #+#    #+#             */
/*   Updated: 2024/08/01 20:17:11 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
	private:
		std::string _name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;

		void		useEnergy();

	public:
		ClapTrap();
		ClapTrap( std::string name );
		ClapTrap( const ClapTrap & other );
		~ClapTrap();

		void		attack( const std::string & target );
		void		takeDamage( unsigned int amount );
		void		beRepaired( unsigned int amount );

		std::string getName();

		ClapTrap &	operator=( const ClapTrap & other );
};

#endif
