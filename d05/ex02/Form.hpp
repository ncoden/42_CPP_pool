/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 16:22:40 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/23 22:55:55 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

# include <iostream>
# include <string>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		std::string				_name;
		bool					_signed;
		int						_minSignGrade;
		int						_minExecGrade;

		virtual void			beExecuted(void);

	public:
		class					GradeTooHighException: public std::exception
		{
			public:
									GradeTooHighException(void);
									~GradeTooHighException(void) throw();
									GradeTooHighException(GradeTooHighException const &src);
			GradeTooHighException	&operator=(GradeTooHighException const &rhs);

			char const				*what(void) const throw();
		};

		class					GradeTooLowException: public std::exception
		{
			public:
									GradeTooLowException(void);
									~GradeTooLowException(void) throw();
									GradeTooLowException(GradeTooLowException const &src);
			GradeTooLowException	&operator=(GradeTooLowException const &rhs);

			char const				*what(void) const throw();
		};

		class					NotSignedException: public std::exception
		{
			public:
									NotSignedException(void);
									~NotSignedException(void) throw();
									NotSignedException(NotSignedException const &src);
			NotSignedException		&operator=(NotSignedException const &rhs);

			char const				*what(void) const throw();
		};

								Form(std::string const &name, int minSignGrade, int minExecGrade)
									throw(GradeTooHighException, GradeTooLowException);
		virtual					~Form(void);
								Form(Form const &src);
		Form					&operator=(Form const &rhs);

		void					beSigned(Bureaucrat const &bureaucrat)
									throw(GradeTooLowException);
		void					execute(Bureaucrat const &executor)
									throw(NotSignedException, GradeTooLowException);

		bool					isSigned(void) const;
		std::string	const		&getName(void) const;
		int						getMinSignGrade(void) const;
		int						getMinExecGrade(void) const;
};

std::ostream					&operator<<(std::ostream &os, Form const &Form);

#endif
