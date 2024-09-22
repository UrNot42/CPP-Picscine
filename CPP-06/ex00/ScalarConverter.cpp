/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 04:18:13 by ulevallo          #+#    #+#             */
/*   Updated: 2024/09/20 11:52:33 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {
	std::cout << "ScalarConverter Default constructor called" << std::endl;
}

ScalarConverter::ScalarConverter( const ScalarConverter & ) {
	std::cout << "ScalarConverter Copy constructor called" << std::endl;
}

ScalarConverter & ScalarConverter::operator=( const ScalarConverter & ) {
	std::cout << "ScalarConverter Copy assignment operator called" << std::endl;
	return ( *this );
}

ScalarConverter::~ScalarConverter() {
	std::cout << "ScalarConverter Destructor called" << std::endl;
}

static int ft_stoi( const std::string & str ) {
	int				  num;
	std::stringstream ss( str );

	ss >> num;
	return num;
}

static float ft_stof( const std::string & str ) {
	float			  num;
	std::stringstream ss( str );

	ss >> num;
	return num;
}

static double ft_stod( const std::string & str ) {
	double			  num;
	std::stringstream ss( str );

	ss >> num;
	return num;
}

static bool isChar( const std::string & literal ) {
	if ( literal.length() != 1 ) {
		return ( false );
	}
	if ( literal.at( 0 ) < std::numeric_limits<char>::min() || literal.at( 0 ) > std::numeric_limits<char>::max()
		 || isdigit( literal.at( 0 ) ) ) {
		return ( false );
	}
	return ( true );
}

static bool isInt( const std::string & literal ) {
	for ( size_t i = literal.at( 0 ) == '-' ? 1 : 0; i < literal.length(); i += 1 ) {
		if ( ! isdigit( literal.at( i ) ) ) {
			return ( false );
		}
	}
	return ( true );
}

static bool isFloat( const std::string & literal ) {
	bool found_point;

	if ( literal == "-inff" || literal == "+inff" || literal == "nanf" ) {
		return ( true );
	}
	if ( literal.at( literal.length() - 1 ) != 'f' ) {
		return ( false );
	}
	found_point = false;
	for ( size_t i = 0; i < literal.length() - 1; i += 1 ) {
		if ( literal.at( i ) == '.' && found_point ) {
			return ( false );
		} else if ( literal.at( i ) == '.' ) {
			found_point = true;
			continue;
		}
		if ( ! isdigit( literal.at( i ) ) ) {
			return ( false );
		}
	}
	return ( true );
}

static bool isDouble( const std::string & literal ) {
	bool found_point;

	found_point = false;
	if ( literal == "-inf" || literal == "+inf" || literal == "nan" ) {
		return true;
	}
	for ( size_t i = 0; i < literal.length(); i += 1 ) {
		if ( literal.at( i ) == '.' && found_point ) {
			return ( false );
		} else if ( literal.at( i ) == '.' ) {
			found_point = true;
			continue;
		}
		if ( ! isdigit( literal.at( i ) ) ) {
			return ( false );
		}
	}
	return ( true );
}

static bool isPseudoLiteral( const std::string & literal ) {
	return (
		literal == "-inff" || literal == "+inff" || literal == "nanf" || literal == "-inf" || literal == "+inf"
		|| literal == "nan"
	);
}

enum literal_type {
	error,
	_pseudo_literal,
	_char,
	_int,
	_float,
	_double,
};

static literal_type getType( const std::string & literal ) {
	if ( isChar( literal ) ) {
		return ( _char );
	}
	if ( isInt( literal ) ) {
		return ( _int );
	}
	if ( isFloat( literal ) ) {
		return ( _float );
	}
	if ( isDouble( literal ) ) {
		return ( _double );
	}
	return ( error );
}

static void print_converted( char c, int i, float f, double d ) {
	std::cout << "char: ";
	if ( isprint( c ) ) {
		std::cout << "'" << c << "'" << std::endl;
	} else {
		std::cout << "Non displayable" << std::endl;
	}
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << f << ".0f" << std::endl;
	std::cout << "double: " << d << ".0" << std::endl;
}

static void literalChar( char ch ) {
	print_converted( ch, static_cast<int>( ch ), static_cast<float>( ch ), static_cast<double>( ch ) );
}

static void literalInt( int nbr ) {
	print_converted( static_cast<char>( nbr ), nbr, static_cast<float>( nbr ), static_cast<double>( nbr ) );
}

static void literalFloat( float nbr ) {
	print_converted( static_cast<char>( nbr ), static_cast<int>( nbr ), nbr, static_cast<double>( nbr ) );
}

static void literalDouble( double nbr ) {
	print_converted( static_cast<char>( nbr ), static_cast<int>( nbr ), static_cast<float>( nbr ), nbr );
}

static void pLiteral( literal_type newType, const std::string & pseudo_literal ) {
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	if ( newType == _float ) {
		std::cout << "float: " << pseudo_literal << std::endl;
		std::cout << "double: " << pseudo_literal.substr( 0, pseudo_literal.length() - 1 ) << std::endl;
	} else if ( newType == _double ) {
		std::cout << "float: " << pseudo_literal + "f" << std::endl;
		std::cout << "double: " << pseudo_literal << std::endl;
	}
}

void ScalarConverter::convert( const std::string & literal ) {
	switch ( getType( literal ) ) {
		case _char:
			literalChar( literal.at( 0 ) );
			break;

		case _int:
			literalInt( ft_stoi( literal ) );
			break;

		case _float:
			if ( isPseudoLiteral( literal ) ) {
				pLiteral( _float, literal );
			} else {
				literalFloat( ft_stof( literal ) );
			}
			break;

		case _double:
			if ( isPseudoLiteral( literal ) ) {
				pLiteral( _double, literal );
			} else {
				literalDouble( ft_stod( literal ) );
			}
			break;

		default:
			std::cout << "??? Type Unknown ???" << std::endl << "Please provide a valid type" << std::endl;
			break;
	}
}
