/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 13:10:16 by pablogon          #+#    #+#             */
/*   Updated: 2025/04/22 18:34:21 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), _target("")
{
	
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj) : _target(obj._target)
{
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj)
{
	std::cout << "ShrubberyCreationForm copy assignmet operator called" << std::endl;

	if (this != &obj)
	{
		*this = obj;
	}
	return (*this);
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
	std::cout << "ShrubberyCreationForm constructor called" << std::endl;
}

int	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	try
	{
		if (executor.getGrade() > this->getGradeToExecute())
			throw (AForm::GradeTooLowException());
		if (this->getSigned() == false)
			throw (AForm::ItWasntSignedException());

		std::ofstream outFile((this->_target + "_shrubbery").c_str());
		if (outFile.fail())
		{
			std::cerr << "Error: File could not be open." << std::endl;
			return (1);
		}

		outFile << "            ,@@@@@@@,            " << std::endl;
		outFile << "    ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl;
		outFile << " ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl;
		outFile << ",%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl;
		outFile << "%&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl;
		outFile << "%&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl;
		outFile << "`&%\\ ` /%&'    |.|        \\ '|8'" << std::endl;
		outFile << "    |o|        | |         | |" << std::endl;
		outFile << "    |.|        | |         | |" << std::endl;
		outFile << " \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_" << std::endl;

		outFile.close();
		return (0);
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what();
		return (1);
	}
	return(0);
}
