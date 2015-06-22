/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 13:53:46 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/22 15:38:29 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
# define AMATERIA_H

# include <string>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	private:
		std::string				_type;	
		unsigned int			xp_;

	public:
		AMateria(std::string const &type);
		virtual ~AMateria(void);
		AMateria(AMateria const &src);

		AMateria			&operator=(AMateria const &rhs);

		virtual AMateria	*clone() const = 0;
		virtual void		use(ICharacter const &target);

		std::string const	&getType() const;
		unsigned int		getXP() const;
};

#endif
