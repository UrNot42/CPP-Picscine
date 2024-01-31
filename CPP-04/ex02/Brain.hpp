/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 06:42:12 by ulevallo          #+#    #+#             */
/*   Updated: 2024/01/31 07:08:08 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain {
	public:

		Brain();
		Brain( const Brain &other );
		Brain &	operator= ( const Brain &other );
		~Brain();

		std::string	ideas[100];
		void	copyIdeas( Brain &other );
		void	copyIdeas( const Brain &other);
};

#endif
