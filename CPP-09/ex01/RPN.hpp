/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 04:28:18 by ulevallo          #+#    #+#             */
/*   Updated: 2024/09/20 10:48:27 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>
#include <stdexcept>
#include <string>

class RPN {
	public:
		static int ResolveExpression( const std::string & line );

	private:
		RPN();
		~RPN();
		RPN( const RPN & rhs );
		RPN &				   operator=( const RPN & rhs );

		static std::stack<int> stack_;

		static const int	   op_size = 4;

		static const struct operations {
				unsigned char symbol;
				int			  ( *calc )( const int & lhs, const int & rhs );
		} operations_[op_size];

		static void PopOperandsTokens( int & lhs, int & rhs );
		static void PushToken( int token );

		static void Operate( unsigned char symbol );

		static int	Addition( const int & lhs, const int & rhs );
		static int	Substraction( const int & lhs, const int & rhs );
		static int	Multiplication( const int & lhs, const int & rhs );
		static int	Division( const int & lhs, const int & rhs );
};

#endif
