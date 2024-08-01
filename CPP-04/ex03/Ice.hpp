/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 07:34:50 by ulevallo          #+#    #+#             */
/*   Updated: 2024/08/01 20:24:06 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include <iostream>

class Ice : public AMateria {
	public:
		Ice();
		Ice( const Ice & other );
		Ice & operator=( const Ice & other );

		~Ice();

		void	   use( ICharacter & target );
		AMateria * clone() const;
};

#endif
