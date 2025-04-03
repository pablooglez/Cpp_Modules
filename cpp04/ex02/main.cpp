/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablogon <pablogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 18:22:12 by pablogon          #+#    #+#             */
/*   Updated: 2025/04/03 18:25:24 by pablogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
	Animal *animal = new Dog;
	Animal *newAnimal = new Cat;

	Dog *dog = new Dog;
	Cat *cat = new Cat;

	WrongAnimal *wanimal = new WrongCat;
	
	animal->makeSound();
	newAnimal->makeSound();

	dog->makeSound();
	cat->makeSound();

	wanimal->makeSound();

	delete animal;
	delete newAnimal;
	delete dog;
	delete cat;
	delete wanimal;

	return (0);
}
