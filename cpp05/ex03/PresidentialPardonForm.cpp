/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 14:09:50 by pablogon          #+#    #+#             */
/*   Updated: 2025/04/22 18:23:47 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), _target("")
{
	
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj) : _target(obj._target)
{
	std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &obj)
{
	std::cout << "PresidentialPardonForm copy assignment operator called" << std::endl;

	if (this != &obj)
	{
		*this = obj;
	}
	return (*this);
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : AForm("PresidentialPardonForm", 25,5), _target(target)
{
	std::cout << "PresidentialPardonForm constructor called" << std::endl;
}

int	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	try
	{
		if (executor.getGrade() > this->getGradeToExecute())
			throw (AForm::GradeTooLowException());
		if (this->getSigned() == false)
			throw (AForm::ItWasntSignedException());

		if(this->getSigned() == true)
		{
			std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
			return (0);
		}
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what();
		return (1);
	}
	return(0);
}