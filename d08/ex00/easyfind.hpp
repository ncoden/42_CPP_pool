/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/25 18:24:20 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/25 19:41:30 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template<typename T>
typename T::iterator		easyfind(T &container, int data)
{
	typename T::iterator	it = container.begin();
	typename T::iterator	it_end = container.end();

	while (it != it_end)
	{
		if (*it == data)
			return (it);
		++it;
	}
	return (it_end);
}
