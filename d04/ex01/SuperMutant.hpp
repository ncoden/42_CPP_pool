/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 07:52:00 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/22 09:50:48 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_H
# define SUPERMUTANT_H

# include <string>
# include "Enemy.hpp"

class SuperMutant: public Enemy
{
	public:
		SuperMutant(void);
		~SuperMutant(void);
		SuperMutant(SuperMutant const &src);

		SuperMutant				&operator=(SuperMutant const &rhs);

		virtual void		takeDamage(int damage);
};

#endif
