/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 20:07:58 by ulevallo          #+#    #+#             */
/*   Updated: 2024/08/01 20:25:51 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main( void ) {
	Bureaucrat steeve;

	try {
		steeve = Bureaucrat( "steeve mac queen", 0 );
		steeve = Bureaucrat( "steeve mac queen", 189 );
		++steeve;
	} catch ( std::exception & ex ) {
		std::cout << ex.what() << std::endl;
	}
	std::cout << steeve << std::endl;
}
