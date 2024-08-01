/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 11:12:50 by ulevallo          #+#    #+#             */
/*   Updated: 2024/08/01 20:14:32 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main( int argc, char ** argv ) {
	Harl karen;

	if ( argc > 1 ) {
		karen.complain( argv[1] );
	} else {
		std::cout << "Please provide a valid message like so:" << std::endl
				  << "\t./harlFilter [DEBUG / INFO / WARNING / ERROR]" << std::endl;
	}
}
