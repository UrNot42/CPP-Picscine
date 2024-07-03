/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 21:22:41 by ulevallo          #+#    #+#             */
/*   Updated: 2024/07/03 12:15:46 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

typedef short unsigned int	t_grade;

class Bureaucrat;

class AForm
{
	private:
		const std::string	_name;
		bool				_signed;
		const t_grade		_reqToSign;
		const t_grade		_reqToExecute;

		void				checkGradeRange( t_grade );

	public:
		AForm();
		AForm( const AForm & src );
		virtual ~AForm() = 0;

		AForm &	operator= ( const AForm & rhs );

		AForm( const std::string name, t_grade reqSign, t_grade reqExec);

		std::string			getName( void ) const ;
		bool				getSigned( void ) const ;
		t_grade				getReqToSign( void ) const ;
		t_grade				getReqToExecute( void ) const ;

		void				beSigned( const Bureaucrat & obj );

		bool				hasRightsToExecute( Bureaucrat const & executor ) const;

		virtual void		execute( Bureaucrat const & executor ) const = 0;

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
		class FormNotSigned : public std::exception
		{
			public:
				const char *	what( void ) const throw();
		};

};

std::ostream &	operator<< ( std::ostream& os, const AForm & obj );

#endif
