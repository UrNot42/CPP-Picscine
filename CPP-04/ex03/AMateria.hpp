/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 07:31:00 by ulevallo          #+#    #+#             */
/*   Updated: 2024/08/01 20:23:49 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "ICharacter.hpp"
#include <iostream>

class ICharacter;

class AMateria {
	protected:
		const std::string _type;

	public:
		AMateria();
		AMateria( const AMateria & other );
		AMateria( const std::string & type );
		AMateria & operator=( const AMateria & other );

		virtual ~AMateria();

		const std::string & getType() const;
		virtual AMateria *	clone() const			   = 0;
		virtual void		use( ICharacter & target ) = 0;
};

#endif
