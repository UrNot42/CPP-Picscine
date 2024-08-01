/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 02:03:09 by ulevallo          #+#    #+#             */
/*   Updated: 2024/08/01 20:21:14 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap : public ClapTrap {
	public:
		FragTrap();
		FragTrap( std::string name );
		FragTrap( const FragTrap & other );
		~FragTrap();

		FragTrap & operator=( const FragTrap & other );
		void	   highFivesGuys( void );
};

#endif
