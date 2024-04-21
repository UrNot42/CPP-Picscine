/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 20:07:58 by ulevallo          #+#    #+#             */
/*   Updated: 2024/04/21 21:16:53 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main( void ) {
	std::cout << "AHAHA" << std::endl;
	Bureaucrat	steeve;

	try {
		steeve = Bureaucrat("steeve mac queen", 0);
		steeve = Bureaucrat("steeve mac queen", 189);
		++steeve;
	}
	catch ( std::exception & ex ) {
		std::cout << ex.what() << std::endl;
	}
	std::cout << steeve << std::endl;
}
