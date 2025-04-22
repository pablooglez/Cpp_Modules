/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 19:09:05 by pablogon          #+#    #+#             */
/*   Updated: 2025/04/22 19:56:12 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern constructor called" << std::endl;
}

Intern::~Intern()
{
	std::cout << "Intern destructor called" << std::endl;
}

Intern::Intern(const Intern &obj)
{
	std::cout << "Intern copy constructor called" << std::endl;
	(void)obj;
}

Intern	&Intern::operator=(const Intern &obj)
{
	std::cout << "Intern copy assignmet operator called" << std::endl;

	if (this != &obj)
	{
		*this = obj;
	}
	return (*this);
}

AForm*	Intern::makeForm(std::string formName, std::string formTarget)
{
	AForm *base = NULL;
	std::string formTypes[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};

	for (int i = 0; i < 3; i++)
	{
		if (formName == formTypes[i])
		{
			switch (i)
			{
			case 0:
				base = new PresidentialPardonForm(formTarget);
				break;
			case 1:
				base = new RobotomyRequestForm(formTarget);
				break;
			case 2:
				base = new ShrubberyCreationForm(formTarget);
				break;
			}
			std::cout << "Intern creates " << formName << std::endl;
			return (base);
		}
	}
	std::cout << "Intern cannot create " << formName << std::endl;
	return NULL;
}