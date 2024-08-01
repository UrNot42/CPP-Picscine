/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 00:09:01 by gde-carv          #+#    #+#             */
/*   Updated: 2024/08/01 20:29:21 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <algorithm>
#include <deque>
#include <iomanip>
#include <iostream>
#include <list>
#include <stack>
#include <string>
#include <vector>

template <typename T, typename Container = std::deque<T>>
class MutantStack : public std::stack<T, Container> {
	public:
		MutantStack() { std::cout << "create MutantStack" << std::endl; }

		MutantStack( const MutantStack & other ) {
			std::cout << "create copy MutantStack from other" << std::endl;
			*this = other;
		}

		~MutantStack() {}

		MutantStack & operator=( const MutantStack & other ) {
			std::cout << "assign MutantStack to other" << std::endl;
			std::stack<T, Container>::operator=( this, other );
			return ( *this );
		}

		typedef typename Container::iterator iterator;

		iterator							 begin( void ) { return ( this->c.begin() ); }

		iterator							 end( void ) { return ( this->c.end() ); }
};

#endif
