/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 07:52:00 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/22 10:43:17 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_H
# define ENEMY_H

# include <string>

class Enemy
{
	protected:
		std::string		_type;
		int				_hp;

	public:
		Enemy(int hp, std::string const &type);
		virtual ~Enemy(void);
		Enemy(Enemy const &src);

		Enemy				&operator=(Enemy const &rhs);

		std::string	const	&getType(void) const;
		int					getHP() const;

		virtual void		takeDamage(int damage);
};

#endif
