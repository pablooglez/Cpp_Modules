/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 18:12:16 by pablogon          #+#    #+#             */
/*   Updated: 2025/03/14 18:33:09 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	std::string stringVAR = "HI THIS IS BRAIN";

	std::string *stringPTR = &stringVAR;

	std::string &stringREF = stringVAR;

	std::cout << "Memory of stringVAR: "<< &stringVAR << std::endl;
	std::cout << "Memory of stringPTR: "<< stringPTR << std::endl;
	std::cout << "Memory of stringREF: "<< &stringREF << std::endl;

	std::cout << "Value of stringVAR: "<< stringVAR << std::endl;
	std::cout << "Value of stringPTR: "<< *stringPTR << std::endl;
	std::cout << "Value of stringREF: "<< stringREF << std::endl;
	
}