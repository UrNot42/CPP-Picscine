/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 20:08:04 by ulevallo          #+#    #+#             */
/*   Updated: 2024/08/01 20:26:24 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "AForm.hpp"
#include <exception>
#include <iostream>

typedef short unsigned int t_grade;

class AForm;

class Bureaucrat {
	private:
		const std::string _name;
		t_grade			  _grade;
		const char *	  checkGradeRange( t_grade );

	public:
		Bureaucrat();
		~Bureaucrat();
		Bureaucrat( const Bureaucrat & src );

		Bureaucrat( const std::string, t_grade );

		Bureaucrat & operator=( const Bureaucrat & rhs );
		Bureaucrat & operator++();
		Bureaucrat & operator--();

		std::string	 getName( void ) const;
		t_grade		 getGrade( void ) const;

		void		 signForm( AForm & obj ) const;
		void		 executeForm( const AForm & form );

		class GradeTooHighException : public std::exception {
			public:
				const char * what( void ) const throw();
		};

		class GradeTooLowException : public std::exception {
			public:
				const char * what( void ) const throw();
		};
};

std::ostream & operator<<( std::ostream & os, const Bureaucrat & obj );

#endif
