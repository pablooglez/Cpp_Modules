/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 14:07:17 by pablogon          #+#    #+#             */
/*   Updated: 2025/04/22 14:09:26 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private:
			const std::string _target;

	public:
			PresidentialPardonForm();
			~PresidentialPardonForm();
			PresidentialPardonForm(const PresidentialPardonForm &obj);
			PresidentialPardonForm &operator=(const PresidentialPardonForm &obj);

			PresidentialPardonForm(const std::string target);
};