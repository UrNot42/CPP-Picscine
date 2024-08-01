/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 23:48:31 by gde-carv          #+#    #+#             */
/*   Updated: 2024/08/01 20:29:14 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <algorithm>
#include <iostream>
#include <vector>

class Span {
	private:
		std::vector<int> numbers;
		unsigned int	 maxCapacity;

	public:
		Span( unsigned int N ) : maxCapacity( N ) {}

		void addNumber( int num ) {
			if ( numbers.size() >= maxCapacity ) {
				throw std::overflow_error( "Cannot add more numbers, maximum capacity reached" );
			}
			numbers.push_back( num );
		}

		template <typename InputIt>
		void addNumbers( InputIt first, InputIt last ) {
			while ( first != last ) {
				addNumber( *first );
				++first;
			}
		}

		int shortestSpan() const {
			if ( numbers.size() <= 1 ) {
				throw std::logic_error( "Cannot find span with less than two numbers" );
			}

			std::vector<int> sortedNumbers = numbers;
			std::sort( sortedNumbers.begin(), sortedNumbers.end() );

			int minSpan = sortedNumbers[1] - sortedNumbers[0];
			for ( size_t i = 2; i < sortedNumbers.size(); ++i ) {
				int currentSpan = sortedNumbers[i] - sortedNumbers[i - 1];
				if ( currentSpan < minSpan ) {
					minSpan = currentSpan;
				}
			}

			return minSpan;
		}

		int longestSpan() const {
			if ( numbers.size() <= 1 ) {
				throw std::logic_error( "Cannot find span with less than two numbers" );
			}

			std::vector<int>::const_iterator minIt = std::min_element( numbers.begin(), numbers.end() );
			std::vector<int>::const_iterator maxIt = std::max_element( numbers.begin(), numbers.end() );

			return *maxIt - *minIt;
		}
};

#endif
