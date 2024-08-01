/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 11:36:44 by ulevallo          #+#    #+#             */
/*   Updated: 2024/08/01 20:24:10 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

#include "AMateria.hpp"
#include <iostream>

class IMateriaSource {
	public:
		virtual ~IMateriaSource() {}

		virtual void	   learnMateria( AMateria * )				 = 0;
		virtual AMateria * createMateria( const std::string & type ) = 0;
};

#endif
