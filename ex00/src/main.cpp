/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <Jfikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 17:41:51 by JFikents          #+#    #+#             */
/*   Updated: 2024/08/27 18:37:33 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int	main(void)
{
	const Animal* meta = new Animal();
	const Animal* cat = new Cat();
	const Animal* dog = new Dog();
	const WrongAnimal* wrong_meta = new WrongAnimal();
	const WrongAnimal* wrong_cat = new WrongCat();
	WrongCat wrong_cat2;

	std::cout << std::endl;
	std::cout << "Animal: ";
	meta->makeSound();
	std::cout << "Cat: ";
	cat->makeSound();
	std::cout << "Cat Animal::makesound: ";
	cat->Animal::makeSound();
	std::cout << "Dog: ";
	dog->makeSound();
	std::cout << "Dog Animal::makesound: ";
	dog->Animal::makeSound();
	std::cout << "WrongAnimal: ";
	wrong_meta->makeSound();
	std::cout << "WrongCat: ";
	wrong_cat->makeSound();
	std::cout << "WrongCat2: ";
	wrong_cat2.makeSound();
	std::cout << std::endl;

	delete meta;
	delete cat;
	delete dog;
	delete wrong_meta;
	delete wrong_cat;
	return (0);
}
