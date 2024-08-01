/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 11:38:34 by ulevallo          #+#    #+#             */
/*   Updated: 2024/08/01 20:24:18 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include <iostream>

class MateriaSource : public IMateriaSource {
	public:
		MateriaSource();
		MateriaSource( const MateriaSource & other );
		MateriaSource & operator=( const MateriaSource & other );

		~MateriaSource();

		void	   learnMateria( AMateria * );
		AMateria * createMateria( const std::string & type );
		void	   displayModels();

	private:
		AMateria * _spells[4];
};

#endif
