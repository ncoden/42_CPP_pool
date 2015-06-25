/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 16:22:40 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/25 20:41:03 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
# define SPAN_H

# include <vector>
# include <exception>

class Span
{
	private:
		std::vector<int>		_datas;
		unsigned int			_data_count;

	public:
		class					SpanFullException: public std::exception
		{
			public:
									SpanFullException(void);
									~SpanFullException(void) throw();
			char const				*what(void) const throw();
		};

								Span(unsigned int size);
								~Span(void);
								Span(Span const &src);
		Span					&operator=(Span const &rhs);

		void					addNumber(int number) throw(SpanFullException);
		void					addNumber(
									std::vector<int>::iterator it,
									std::vector<int>::iterator end
								) throw(SpanFullException);

		int						shortestSpan(void);
		int						longestSpan(void);
};

#endif
