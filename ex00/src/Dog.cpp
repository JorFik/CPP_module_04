/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <Jfikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 17:40:10 by JFikents          #+#    #+#             */
/*   Updated: 2024/08/27 18:18:27 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>
#include <ctime>
#include <cstdlib>

const std::string Dog::_sounds[DOG_SOUNDS_COUNT] =
	{"Woof", "Grrrrrrr"};

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog	&Dog::operator =(const Dog &other)
{
	std::cout << "Dog assignation operator called" << std::endl;
	if (this != &other)
		Animal::operator=(other);
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::srand(static_cast<unsigned int>(std::time(0)));
	const int	random_index = std::rand() % DOG_SOUNDS_COUNT;

	std::cout << _sounds[random_index] << std::endl;
}
