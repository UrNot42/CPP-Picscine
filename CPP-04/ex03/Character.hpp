/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 11:22:15 by ulevallo          #+#    #+#             */
/*   Updated: 2024/08/01 20:23:54 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include <iostream>

class Character : public ICharacter {
	private:
		const std::string _name;
		void			  copyInventory( AMateria ** newInventory );
		AMateria *		  _inventory[4];

	public:
		Character();
		Character( std::string name );
		Character( const Character & other );
		Character & operator=( const Character & other );

		~Character();

		const std::string & getName() const;
		void				equip( AMateria * m );
		void				unequip( int idx );
		void				use( int idx, ICharacter & target );
		AMateria * const &	getInventory() const;
		void				displayInventory();
};

#endif
