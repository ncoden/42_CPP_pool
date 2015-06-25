/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/23 19:30:13 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/25 21:11:26 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <vector>
#include "Span.hpp"

int				main(void)
{
	Span				span_one(1);
	Span				span(50000);
	std::vector<int>	source1;
	std::vector<int>	source2(46000);

	std::cout << "Trying to push 1 value in a Span of 1 value: ";
	try {
		span_one.addNumber(42);
		std::cout << "Success" << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "ERROR (not expected): " << e.what() << std::endl;
	}

	std::cout << "Trying to push 1 more value in the same Span: ";
	try {
		span_one.addNumber(42);
		std::cout << "Success, but that was not expected" << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "ERROR (Span full expected): " << e.what() << std::endl;
	}

	span.addNumber(100);
	span.addNumber(200);
	span.addNumber(300);
	span.addNumber(400);

	std::cout << "With values from 100 to 400" << std::endl;
	std::cout << "Min: " << span.shortestSpan() << std::endl;
	std::cout << "Max: " << span.longestSpan() << std::endl;

	for (int i = 42; i <= 4242; i++)
		source1.push_back(i);
	span.addNumber(source1.begin(), source1.end());

	std::cout << "With values from 42 to 4242" << std::endl;
	std::cout << "Min: " << span.shortestSpan() << std::endl;
	std::cout << "Max: " << span.longestSpan() << std::endl;

	std::cout << "Trying to push 46000 more values in a Span of 50000 values: ";
	try {
		span.addNumber(source2.begin(), source2.end());
		std::cout << "Success, but that was not expected" << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "ERROR (Span full expected): " << e.what() << std::endl;
	}
	return (0);
}
