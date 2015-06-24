/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 16:22:40 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/24 01:29:31 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OFFICEBLOCK_H
# define OFFICEBLOCK_H

# include <string>
# include "Intern.hpp"
# include "Bureaucrat.hpp"

class OfficeBlock
{
	private:
		Intern					*_intern;
		Bureaucrat				*_signer;
		Bureaucrat				*_executor;

	public:
		class					NoInternException: public std::exception
		{
			public:
									NoInternException(void);
									~NoInternException(void) throw();
									NoInternException(NoInternException const &src);
			NoInternException		&operator=(NoInternException const &rhs);
			char const				*what(void) const throw();
		};

		class					NoSignerException: public std::exception
		{
			public:
									NoSignerException(void);
									~NoSignerException(void) throw();
									NoSignerException(NoSignerException const &src);
			NoSignerException		&operator=(NoSignerException const &rhs);
			char const				*what(void) const throw();
		};

		class					NoExecutorException: public std::exception
		{
			public:
									NoExecutorException(void);
									~NoExecutorException(void) throw();
									NoExecutorException(NoExecutorException const &src);
			NoExecutorException		&operator=(NoExecutorException const &rhs);
			char const				*what(void) const throw();
		};

		class					SignerGradeTooLowException: public std::exception
		{
			public:
									SignerGradeTooLowException(void);
									~SignerGradeTooLowException(void) throw();
									SignerGradeTooLowException(SignerGradeTooLowException const &src);
			SignerGradeTooLowException		&operator=(SignerGradeTooLowException const &rhs);
			char const				*what(void) const throw();
		};

		class					ExecutorGradeTooLowException: public std::exception
		{
			public:
									ExecutorGradeTooLowException(void);
									~ExecutorGradeTooLowException(void) throw();
									ExecutorGradeTooLowException(ExecutorGradeTooLowException const &src);
			ExecutorGradeTooLowException		&operator=(ExecutorGradeTooLowException const &rhs);
			char const				*what(void) const throw();
		};

								OfficeBlock(void);
								~OfficeBlock(void);
								OfficeBlock(Intern &intern, Bureaucrat &signer, Bureaucrat &executor);

		void					doBureaucracy(std::string const &name, std::string const &target);

		void					setIntern(Intern &intern);
		void					setSigner(Bureaucrat &signer);
		void					setExecutor(Bureaucrat &executor);
};

#endif
