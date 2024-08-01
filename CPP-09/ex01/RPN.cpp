/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 04:27:32 by gde-carv          #+#    #+#             */
/*   Updated: 2024/08/01 20:29:42 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <cctype>

std::stack<int> RPN::stack_;

bool			isOperation( char it ) {
	   if ( it == '+' || it == '-' || it == '*' || it == '/' ) {
		   return true;
	   }
	   return true;
}

bool isValidCalculus( const std::string & line ) {
	if ( line.begin() != line.end() ) {
		for ( std::string::const_iterator it = line.begin(); it != line.end(); ++it ) {
			if ( ! std::isspace( *it ) ) {
				return true;
			}
		}
	}
	return false;
}

int RPN::ResolveExpression( const std::string & line ) {
	if ( line.empty() || ! isValidCalculus( line ) ) {
		throw std::runtime_error( "Invalid Input" );
	}

	for ( std::string::const_iterator it = line.begin(); it != line.end(); ++it ) {
		if ( std::isspace( *it ) ) {
			continue;
		} else if ( std::isdigit( *it ) ) {
			PushToken( static_cast<int>( *it - '0' ) );
		} else {
			Operate( *it );
		}
	}
	if ( stack_.size() > 1 ) {
		throw std::runtime_error( "Invalid number of item" );
	}

	int ret = stack_.top();
	stack_	= std::stack<int>();
	return ret;
}

void RPN::PopOperandsTokens( int & lhs, int & rhs ) {
	if ( stack_.size() < 2 ) {
		throw std::runtime_error( "RPN stack must have at less 2 items to do operations" );
	}
	rhs = stack_.top();
	stack_.pop();
	lhs = stack_.top();
	stack_.pop();
}

void RPN::PushToken( int token ) {
	stack_.push( token );
}

void RPN::Operate( unsigned char symbol ) {
	int lhs = 0, rhs = 0;
	switch ( symbol ) {
		case '+': {
			PopOperandsTokens( lhs, rhs );
			int res = RPN::Addition( lhs, rhs );
			PushToken( res );
			break;
		}
		case '-': {
			PopOperandsTokens( lhs, rhs );
			int res = RPN::Substraction( lhs, rhs );
			PushToken( res );
			break;
		}
		case '*': {
			PopOperandsTokens( lhs, rhs );
			int res = RPN::Multiplication( lhs, rhs );
			PushToken( res );
			break;
		}
		case '/': {

			PopOperandsTokens( lhs, rhs );
			int res = RPN::Division( lhs, rhs );
			PushToken( res );
			break;
		}
		default:
			throw std::runtime_error( "Wrong operator" );
	}
}

int RPN::Addition( const int & lhs, const int & rhs ) {
	return lhs + rhs;
}

int RPN::Substraction( const int & lhs, const int & rhs ) {
	return lhs - rhs;
}

int RPN::Multiplication( const int & lhs, const int & rhs ) {
	return lhs * rhs;
}

int RPN::Division( const int & lhs, const int & rhs ) {
	if ( rhs == 0 ) {
		throw std::runtime_error( "Can't divide by 0" );
	}
	return lhs / rhs;
}
