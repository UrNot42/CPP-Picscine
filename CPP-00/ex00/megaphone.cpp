/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 10:45:36 by ulevallo          #+#    #+#             */
/*   Updated: 2024/08/01 20:12:05 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main( int ac, char ** av ) {
	if ( ac < 2 ) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	} else {
		std::string upper_str;
		for ( int i = 1; av[i]; i++ ) {
			upper_str += av[i];
		}
		for ( int i = 0; upper_str[i]; i++ ) {
			upper_str[i] = std::toupper( upper_str[i] );
		}
		std::cout << upper_str << std::endl;
	}
}
