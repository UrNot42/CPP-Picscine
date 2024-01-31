/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 07:31:00 by ulevallo          #+#    #+#             */
/*   Updated: 2024/01/31 16:23:22 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class	ICharacter;

class	AMateria {
	protected:
		std::string const _type;

	public:

		AMateria();
		AMateria( const AMateria &other );
		AMateria(std::string const & type);
		AMateria &	operator= ( const AMateria &other );

		virtual ~AMateria();

		std::string const &getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target) = 0;
};

#endif
