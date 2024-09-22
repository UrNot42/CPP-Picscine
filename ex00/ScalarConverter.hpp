/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 22:58:23 by ulevallo          #+#    #+#             */
/*   Updated: 2024/09/20 11:53:14 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iomanip>
#include <iostream>
#include <limits>
#include <sstream>
#include <string>


class ScalarConverter {
	private:
		ScalarConverter();
		ScalarConverter( const ScalarConverter & other );
		ScalarConverter & operator=( const ScalarConverter & other );

	public:
		static void convert( const std::string & literal );

		~ScalarConverter();
};

#endif
