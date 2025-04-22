/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 19:28:37 by pablogon          #+#    #+#             */
/*   Updated: 2025/04/22 20:11:32 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	try
	{
		Bureaucrat jefe("Jefe", 5);
		Bureaucrat empleado("Empleado", 45);

		std::cout << jefe;
		std::cout << empleado;


		ShrubberyCreationForm jardin("jardin");
		RobotomyRequestForm robot("robot");
		PresidentialPardonForm perdon("prisionero");

		std::cout << "\n//-----FIRMANDO FORMULARIOS-----//\n" << std::endl;
		jefe.signForm(jardin);
		jefe.signForm(robot);
		jefe.signForm(perdon);

		std::cout << "\n//-----EJECUTANDO FORMULARIOS-----//\n" << std::endl;
		jefe.executeForm(jardin);
		jefe.executeForm(robot);
		jefe.executeForm(perdon);


		std::cout << "\n//-----INTENTOS DEL EMPLEADO-----//\n" << std::endl;
		empleado.executeForm(jardin);  // (lvl 45 < 137)
		empleado.executeForm(robot);   // (lvl 45 = 45)
		empleado.executeForm(perdon);  // No (lvl 45 > 5)

		std::cout << "\n//-----CASO ESPECIAL: SIN FIRMA-----//\n" << std::endl;
		ShrubberyCreationForm sinFirma("parque");
		empleado.executeForm(sinFirma);  // Fail because is not sign
	}
	catch (std::exception &e)
	{
		std::cerr << "Excepción: " << e.what();
	}
	
	return(0);
}