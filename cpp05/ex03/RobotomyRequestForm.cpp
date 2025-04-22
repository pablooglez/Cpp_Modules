/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 13:51:34 by pablogon          #+#    #+#             */
/*   Updated: 2025/04/22 18:34:34 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), _target("")
{
	
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Robotomy destructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj) : _target(obj._target)
{
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &obj)
{
	std::cout << "RobotomyRequestForm copy assignmet operator called" << std::endl;

	if (this != &obj)
	{
		*this = obj;
	}
	return (*this);
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target)
{
	std::cout << "RobotomyRequestForm constructor called" << std::endl;
}

int	RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	try
	{
		if (executor.getGrade() > this->getGradeToExecute())
			throw (AForm::GradeTooLowException());
		if (this->getSigned() == false)
			throw (AForm::ItWasntSignedException());

		std::srand(static_cast<unsigned int>(std::time(0)));
		if (std::rand() % 2 == 0)
		{
			std::cout << this->_target << " has been robotomized successfully!" << std::endl;
		}
		else
		{
			std::cout << this->_target << "he was not lucky enough to be robotized" << std::endl;
		}
		return (0);
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what();
		return (1);
	}
	return(0);
}