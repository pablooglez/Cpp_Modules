/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 19:28:37 by pablogon          #+#    #+#             */
/*   Updated: 2025/04/22 20:42:11 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	Intern someRandomIntern;
	AForm* form;
	Bureaucrat boss("Boss", 1);

	std::cout << "\n//----FORMULARIO EXISTENTE: presidential pardon----//" << std::endl;
	
	form = someRandomIntern.makeForm("presidential pardon", "Bender");
	if (form)
	{
		boss.signForm(*form);
		boss.executeForm(*form);
		delete form;
	}

	std::cout << "\n//----FORMULARIO EXISTENTE: robotomy request----//" << std::endl;
	
	form = someRandomIntern.makeForm("robotomy request", "Fry");
	if (form)
	{
		boss.signForm(*form);
		boss.executeForm(*form);
		delete form;
	}

	std::cout << "\n//----FORMULARIO EXISTENTE: shrubbery creation----//" << std::endl;
	
	form = someRandomIntern.makeForm("shrubbery creation", "Garden");
	if (form)
	{
		boss.signForm(*form);
		boss.executeForm(*form);
		delete form;
	}

	std::cout << "\n//----FORMULARIO INEXISTENTE----//" << std::endl;
	
	form = someRandomIntern.makeForm("this form does not exist", "Nadie");
	if (form)
		delete form;

	return (0);
}