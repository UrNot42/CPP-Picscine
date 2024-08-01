/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 23:48:08 by gde-carv          #+#    #+#             */
/*   Updated: 2024/08/01 20:29:10 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main() {
	try {
		Span sp( 5 );
		sp.addNumber( 6 );
		sp.addNumber( 3 );
		sp.addNumber( 17 );
		sp.addNumber( 9 );
		sp.addNumber( 11 );

		std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest Span: " << sp.longestSpan() << std::endl;

		std::vector<int> moreNumbers;
		moreNumbers.push_back( 1 );
		moreNumbers.push_back( 5 );
		moreNumbers.push_back( 8 );
		moreNumbers.push_back( 15 );
		moreNumbers.push_back( 20 );

		sp.addNumbers( moreNumbers.begin(), moreNumbers.end() );

		std::cout << "Updated Shortest Span: " << sp.shortestSpan() << std::endl;
		std::cout << "Updated Longest Span: " << sp.longestSpan() << std::endl;

	} catch ( const std::exception & e ) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	return 0;
}
