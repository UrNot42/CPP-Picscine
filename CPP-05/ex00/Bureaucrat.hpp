/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 20:08:04 by ulevallo          #+#    #+#             */
/*   Updated: 2024/04/21 21:17:31 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>

class Bureaucrat
{
	private:
		std::string				_name;
		short unsigned int		_grade;
		char *					checkGradeRange( short unsigned int );

	public:
		Bureaucrat();
		~Bureaucrat();
		Bureaucrat( const Bureaucrat & src );

		Bureaucrat( std::string, short unsigned int );

		Bureaucrat &			operator=( const Bureaucrat & rhs );
		Bureaucrat &			operator++();
		Bureaucrat &			operator--();

		std::string				getName( void ) const;
		short unsigned int		getGrade( void ) const;

		class GradeTooHighException : public std::exception
		{
			public:
				const char *	what( void ) const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				const char *	what( void ) const throw();
		};
};

std::ostream &	operator<<( std::ostream& os, const Bureaucrat & obj );


#endif

