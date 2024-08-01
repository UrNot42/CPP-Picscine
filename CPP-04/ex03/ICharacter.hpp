/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 08:06:42 by ulevallo          #+#    #+#             */
/*   Updated: 2024/08/01 20:24:08 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include "AMateria.hpp"
#include <iostream>

class AMateria;

class ICharacter {
	public:
		virtual ~ICharacter() {}

		virtual const std::string & getName() const						= 0;
		virtual void				equip( AMateria * m )				= 0;
		virtual void				unequip( int idx )					= 0;
		virtual void				use( int idx, ICharacter & target ) = 0;
};

#endif
