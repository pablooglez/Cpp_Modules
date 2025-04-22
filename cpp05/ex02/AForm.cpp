/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 20:55:00 by pablogon          #+#    #+#             */
/*   Updated: 2025/04/22 14:34:10 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("Default"), _gradeToSign(150), _gradeToExecute(150)
{
	this->_signed = false;
}

AForm::~AForm()
{
	std::cout << "Form destructor called" << std::endl;
}

AForm::AForm(const AForm &obj) : _name(obj._name), _signed(obj._signed), _gradeToSign(obj._gradeToSign), _gradeToExecute(obj._gradeToExecute)
{
	std::cout << "Form copy constructor called" << std::endl;
}

AForm	&AForm::operator=(const AForm &obj)
{
	std::cout << "Form copy assignmet operator called" << std::endl;
	
	if (this != &obj)
	{
		*this = obj;
	}
	return (*this);
}

AForm::AForm(const std::string name, const int gradeToSign, const int gradeToExecute) : _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	std::cout << _name << ": Form default constructor called" << std::endl;
	
	this->_signed = false;

	try
	{
		if (_gradeToSign < 1 || _gradeToExecute < 1)
			throw GradeTooHighException();
		else if (_gradeToSign > 150 || _gradeToExecute > 150)
			throw GradeTooLowException();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what();
	}
	
}

const	std::string &AForm::getName() const
{
	return this->_name;
}

const bool &AForm::getSigned() const
{
	return this->_signed;
}

const int &AForm::getGradeToSign() const
{
	return this->_gradeToSign;
}

const int &AForm::getGradeToExecute() const
{
	return this->_gradeToExecute;
}

void	AForm::beSigned(const Bureaucrat &obj)
{
	if (obj.getGrade() > this->getGradeToSign())
		throw(AForm::GradeTooLowException());
	this->_signed = true;
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return "Grade too hight!\n";
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return "Grade too low!\n";
}

const char* AForm::ItWasntSignedException::what() const throw()
{
	return "It's already signed!\n";
}

const char* AForm::ItWasntSignedException::what() const throw()
{
	return "Has not been signed!\n";
}

std::ostream &operator<<(std::ostream &out, const AForm &obj)
{
	out << "Form name: " << obj.getName() << std::endl;

	if(obj.getSigned() == true)
		out << "It's signed\n";
	else
		out << "It's not signed\n";

	out << "Sign Grade " << obj.getGradeToSign() << std::endl;
	out << "Execute Grade " << obj.getGradeToExecute() << std::endl;

	return (out);
}