/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <Jfikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 17:41:51 by JFikents          #+#    #+#             */
/*   Updated: 2024/08/27 21:02:14 by JFikents         ###   ########.fr       */
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
	Animal	*animal_horde[4] = {
		new Cat(),
		new Dog(),
		new Cat(),
		new Dog()
	};
	animal_horde[0]->setOwner("David");
	animal_horde[1]->setOwner("Diana");
	animal_horde[2]->setOwner("John");
	animal_horde[3]->setOwner("Jane");
	std::cout << std::endl;
	std::cout << "-------------------BASIC TEST---------------------";
	for (int i = 0; i < 4; i++)
	{
	std::cout << std::endl;
	std::cout << std::endl;
		animal_horde[i]->readMyMind();
		animal_horde[i]->makeSound();
	std::cout << std::endl;
		delete animal_horde[i];
	}
	std::cout << std::endl;
	std::cout << "-------------------END OF BASIC TEST---------------------" << std::endl;
	std::cout << std::endl;
	std::cout << "-------------------DEEP COPY TEST---------------------" << std::endl;
	std::cout << std::endl;
	std::cout << "Tom is born and Tomas is his owner" << std::endl;
	Cat tom;
	tom.setOwner("Tomas");
	std::cout << std::endl;
	std::cout << "Snoopy is born and Charlie is his owner" << std::endl;
	Dog snoopy;
	snoopy.setOwner("Charlie");
	std::cout << std::endl;
	std::cout << "Garfield is born and Jon is his owner" << std::endl;
	Cat garfield;
	garfield.setOwner("Jon");
	std::cout << std::endl;
	std::cout << "Spike is born and is a clone of Snoopy [spike(snoopy)]" << std::endl;
	Dog spike(snoopy);
	std::cout << std::endl;
	std::cout << "Tom is a copy of Garfield now [Tom = Garfield]" << std::endl;
	tom = garfield;
	std::cout << std::endl;
	std::cout << "Tom is thinking" << std::endl;
	tom.readMyMind();
	std::cout << std::endl;
	std::cout << "Snoopy is thinking" << std::endl;
	snoopy.readMyMind();
	std::cout << std::endl;
	std::cout << "Garfield is thinking" << std::endl;
	garfield.readMyMind();
	std::cout << std::endl;
	std::cout << "Spike is thinking" << std::endl;
	spike.readMyMind();
	std::cout << std::endl;
	return (0);
}
