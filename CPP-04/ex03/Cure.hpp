/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 07:35:24 by ulevallo          #+#    #+#             */
/*   Updated: 2024/08/01 20:24:01 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include <iostream>

class Cure : public AMateria {
	private:
	public:
		Cure();
		Cure( const Cure & other );
		Cure & operator=( const Cure & other );

		~Cure();

		void	   use( ICharacter & target );
		AMateria * clone() const;
};

#endif
