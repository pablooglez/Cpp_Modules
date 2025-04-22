/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 19:28:37 by pablogon          #+#    #+#             */
/*   Updated: 2025/04/22 12:35:29 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	std::cout << "---------CONSTRUCTORS---------\n" << std::endl;

	Bureaucrat correct("First", 50);
	Bureaucrat low("Second", 160);
	Bureaucrat high("Third", 0);

	std::cout << "\n---------VALUES---------\n" << std::endl;

	std::cout << correct << std::endl;
	std::cout << low << std::endl;
	std::cout << high << std::endl;

	std::cout << "\n---------INC/DEC TESTS---------\n" << std::endl;

	Bureaucrat wrongIncrement("Inc", 1);
	std::cout << wrongIncrement << std::endl;
	wrongIncrement.incrementGrade();
	std::cout << wrongIncrement << std::endl;

	std::cout << std::endl;

	Bureaucrat wrongDecrement("Dec", 150);
	std::cout <<  wrongDecrement << std::endl;
	wrongDecrement.decrementGrade();
	std::cout <<  wrongDecrement << std::endl;

	std::cout << "\n---------DESTRUCTORS---------\n" << std::endl;

	return (0);
}