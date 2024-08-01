/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 11:12:50 by ulevallo          #+#    #+#             */
/*   Updated: 2024/08/01 20:14:21 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main() {
	Harl karen;

	karen.complain( "DEBUG" );
	karen.complain( "INFO" );
	karen.complain( "WARNING" );
	karen.complain( "ERROR" );
	karen.complain( "Unexisting level" );
}
