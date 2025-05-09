/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 17:39:10 by pablogon          #+#             */
/*   Updated: 2025/04/29 18:30:36 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	std::cout << "ScalarConverte constructor called" << std::endl;
}

ScalarConverter::~ScalarConverter()
{
	std::cout << "ScalarConverte destructor called" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &obj)
{
	std::cout << "ScalarConverte copy constructor called" << std::endl;

	(void)obj;
}

ScalarConverter	&ScalarConverter::operator=(const ScalarConverter &obj)
{
	std::cout << "ScalarConverte copy assignment operator called" << std::endl;
	
	(void)obj;
	return *this;
}

int	getType(std::string str) // (1) -> char ; (2) -> nan, inf ; (3) -> int ; (4) -> float ; (5) -> double
{
	if (str.length() == 1 && !std::isdigit(str[0]))
		return (1);

	else if (str == "nan" || str == "nanf" || str == "+inf" || str == "+inff" ||
			str == "-inf" || str == "-inff")
			return (2);

	else
	{
		char	*endptr = NULL;

		if (str.length() > 0 && (str[str.length() - 1] == 'f' || str[str.length() - 1] == 'F'))
		{
			strtof(str.c_str(), &endptr);
			if (endptr != NULL && (*endptr == 'f' || *endptr == 'F'))
				return (4);
		}

		double d = strtod(str.c_str(), &endptr);
		if (endptr != NULL && *endptr == '\0')
		{
			if (d == static_cast<long long>(d) && 
				d <= std::numeric_limits<long>::max() && 
				d >= std::numeric_limits<long>::min())
			{
				endptr = NULL;
				std::strtol(str.c_str(), &endptr, 10);
				if (endptr != NULL && *endptr == '\0')
					return (3);
			}
			return (5);
		}
	}
	return (0);
}


void	ScalarConverter::convert (std::string str)
{
	switch (getType(str))
	{
		case (1): // Char
		{
			char c = str[0];

			std::cout << "char: " << c << std::endl;
			std::cout << "int: " << static_cast<int>(c) << std::endl;
			std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
			std::cout << "double: " << static_cast<double>(c) << ".0" <<std::endl;
			break;
		}
		case (2): // nan, inf
		{
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			
			if (str == "nanf" || str == "+inff" || str == "-inff")
			{
				std::cout << "float: " << str << std::endl;
				std::cout << "double: " << str.substr(0, str.length() - 1) << std::endl;
			}
			else
			{
				std::cout << "float: " << str << "f" << std::endl;
				std::cout << "double: " << str << std::endl;
			}
			break;
		}
		case (3): // int
		{
			long num = std::strtol(str.c_str(), NULL, 10);

			if (num > std::numeric_limits<int>::max() || num < std::numeric_limits<int>::min())
			{
				std::cout << "char: impossible" << std::endl;
				std::cout << "int: impossible" << std::endl;
				std::cout << "float: impossible" << std::endl;
				std::cout << "double: impossible" << std::endl;
				break;
			}

			int i = static_cast<int>(num);

			if (std::isprint(i))
			{
				std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;
			}
			else if (i >= 0 && i <= 127)
			{
				std::cout << "char: Non displayable" << std::endl;
			}
			else
			{
				std::cout << "char: impossible" << std::endl;
			}
			std::cout << "int: " << i << std::endl;
			std::cout << "float: " << static_cast<float>(i) << ".0f" << std::endl;
			std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl;
			break;
		}
		case (4): // float
		{
			float f = std::strtof(str.c_str(), NULL);

			if (f <= std::numeric_limits<int>::max() && f >= std::numeric_limits<int>::min() &&
				f == static_cast<int>(f) && std::isprint(static_cast<int>(f)))
			{
				std::cout << "char: '" << static_cast<char>(f) << "'" << std::endl;
			}
			else if (f >= 0 && f <= 127 && f == static_cast<int>(f))
			{
				std::cout << "char: Non displayable" << std::endl;
			}
			else
			{
				std::cout << "char: impossible" << std::endl;
			}

			if (f <= std::numeric_limits<int>::max() && f >= std::numeric_limits<int>::min() && f == static_cast<int>(f))
			{
				std::cout << "int: " << static_cast<int>(f) << std::endl;
			}
			else
			{
				std::cout << "int: impossible" << std::endl;
			}

			if ((f <= std::numeric_limits<float>::max() && f >= -std::numeric_limits<float>::max()) ||
				std::isnan(f) || std::isinf(f))
			{
				if (f == static_cast<int>(f))
				{
					std::cout << "float: " << f << ".0f" << std::endl;
				}
				else
				{
					std::cout << "float: " << f << "f" << std::endl;
				}
			}
			else
			{
				std::cout << "float: impossible" << std::endl;
			}

			if (f == static_cast<int>(f))
			{
				std::cout << "double: " << static_cast<double>(f) << ".0" << std::endl;
			}
			else
			{
				std::cout << "double: " << static_cast<double>(f) << std::endl;
			}
			break;
		}
		case (5): // double
		{
			double d = std::strtod(str.c_str(), NULL);

			if (d <= std::numeric_limits<int>::max() && d >= std::numeric_limits<int>::min() && 
				d == static_cast<int>(d) && std::isprint(static_cast<int>(d)))
			{
				std::cout << "char: '" << static_cast<char>(d) << "'" << std::endl;
			}
			else if (d >= 0 && d <= 127 && d == static_cast<int>(d))
			{
				std::cout << "char: Non displayable" << std::endl;
			}
			else
			{
				std::cout << "char: impossible" << std::endl;
			}

			if (d <= std::numeric_limits<int>::max() && d >= std::numeric_limits<int>::min() && 
				d == static_cast<int>(d))
			{
				std::cout << "int: " << static_cast<int>(d) << std::endl;
			}
			else
			{
				std::cout << "int: impossible" << std::endl;
			}


			if ((d <= std::numeric_limits<float>::max() && d >= -std::numeric_limits<float>::max()) || 
				std::isnan(d) || std::isinf(d))
			{
				if (d == static_cast<int>(d))
				{
					std::cout << "float: " << static_cast<float>(d) << ".0f" << std::endl;
				}
				else
				{
					std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
				}
			}
			else
			{
				std::cout << "float: impossible" << std::endl;
			}

			if (d == static_cast<int>(d))
			{
				std::cout << "double: " << d << ".0" << std::endl;
			}
			else
			{
				std::cout << "double: " << d << std::endl;
			}
			break;
		}
		default:
		{
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "float: impossible" << std::endl;
			std::cout << "double: impossible" << std::endl;
		}
	}
}
