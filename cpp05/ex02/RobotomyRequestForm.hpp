/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 13:45:46 by pablogon          #+#    #+#             */
/*   Updated: 2025/04/22 14:06:36 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	private:
			const std::string _target;

	public:
			RobotomyRequestForm();
			~RobotomyRequestForm();
			RobotomyRequestForm(const RobotomyRequestForm &obj);
			RobotomyRequestForm &operator=(const RobotomyRequestForm &obj);

			RobotomyRequestForm(const std::string target);
};