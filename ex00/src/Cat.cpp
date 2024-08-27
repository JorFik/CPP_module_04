/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <Jfikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 17:08:55 by JFikents          #+#    #+#             */
/*   Updated: 2024/08/27 18:04:04 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>
#include <ctime>
#include <cstdlib>

const std::string Cat::_sounds[CAT_SOUNDS_COUNT] =
	{"Meow", "Purr", "Hiss"};

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat	&Cat::operator =(const Cat &other)
{
	std::cout << "Cat assignation operator called" << std::endl;
	if (this != &other)
		Animal::operator=(other);
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::srand(static_cast<unsigned int>(std::time(0)));
	const int	random_index = std::rand() % CAT_SOUNDS_COUNT;

	std::cout << _sounds[random_index] << std::endl;
}
