/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 21:22:41 by ulevallo          #+#    #+#             */
/*   Updated: 2024/08/01 20:26:06 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <exception>
#include <iostream>

typedef short unsigned int t_grade;

class Bureaucrat;

class Form {
	private:
		const std::string _name;
		bool			  _signed;
		const t_grade	  _reqToSign;
		const t_grade	  _reqToExecute;

		void			  checkGradeRange( t_grade );

	public:
		Form();
		Form( const Form & src );
		~Form();

		Form & operator=( const Form & rhs );

		Form( const std::string name, t_grade reqSign, t_grade reqExec );

		std::string getName( void ) const;
		bool		getSigned( void ) const;
		t_grade		getReqToSign( void ) const;
		t_grade		getReqToExecute( void ) const;

		void		beSigned( const Bureaucrat & obj );

		class GradeTooHighException : public std::exception {
			public:
				const char * what( void ) const throw();
		};

		class GradeTooLowException : public std::exception {
			public:
				const char * what( void ) const throw();
		};
};

std::ostream & operator<<( std::ostream & os, const Form & obj );

#endif
