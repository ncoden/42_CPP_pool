/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 16:22:40 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/23 22:13:33 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

# include <iostream>
# include <string>
# include <exception>
# include "Bureaucrat.hpp"
# include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		std::string				_name;
		int						_grade;

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

								Bureaucrat(std::string const &name, int grade)
									throw(GradeTooHighException, GradeTooLowException);
								~Bureaucrat(void);
								Bureaucrat(Bureaucrat const &src);
		Bureaucrat				&operator=(Bureaucrat const &rhs);

		void					incrementGrade(void)
									throw(GradeTooHighException);
		void					decrementGrade(void)
									throw(GradeTooLowException);
		void					signForm(Form &form) const;
		void					executeForm(Form &form) const;

		std::string	const		&getName(void) const;
		int						getGrade(void) const;
};

std::ostream					&operator<<(std::ostream &os, Bureaucrat const &bureaucrat);

#endif
