/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 11:15:12 by ulevallo          #+#    #+#             */
/*   Updated: 2024/08/01 20:14:16 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Harl {
	public:
		Harl();
		~Harl();
		void complain( std::string level );

	private:
		void debug();
		void info();
		void warning();
		void error();
};
