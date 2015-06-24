/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CentralBureaucracy.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 16:22:40 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/24 02:35:15 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CENTRALBUREAUCRACY_H
# define CENTRALBUREAUCRACY_H

# include <string>
# include "OfficeBlock.hpp"
# include "Bureaucrat.hpp"
# include "Intern.hpp"

class CentralBureaucracy
{
	private:
		static std::string		_works[];
		static int				_work_count;

		OfficeBlock				_offices[20];
		int						_office_count;
		int						_bureaucrat_count;

		std::string				_queue[20];
		int						_queue_size;

	public:
								CentralBureaucracy(void);
								~CentralBureaucracy(void);
								CentralBureaucracy(CentralBureaucracy const &src);
		CentralBureaucracy		&operator=(CentralBureaucracy const &rhs);

		void					feed(Bureaucrat &bureaucrat);
		void					queueUp(std::string const &target);
		void					doBureaucracy(void);
};

#endif
