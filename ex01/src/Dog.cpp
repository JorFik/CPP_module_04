/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <Jfikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 17:40:10 by JFikents          #+#    #+#             */
/*   Updated: 2024/08/27 20:50:29 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>
#include <ctime>
#include <cstdlib>

const std::string Dog::_sounds[DOG_SOUNDS_COUNT] =
	{"Dog: \"Woof woof!\"", "Dog: \"Bark bark Grrrrrrr!\""};

Dog::Dog() : Animal("Dog")
{
	std::srand(static_cast<unsigned int>(std::time(0)));
	std::cout << "Dog default constructor called" << std::endl;
	this->_brain = new Brain();
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete this->_brain;
}

Dog::Dog(const Dog &other) : Animal(other)
{
	std::srand(static_cast<unsigned int>(std::time(0)));
	std::cout << "Dog copy constructor called" << std::endl;
	this->_brain = new Brain(*other._brain);
}

Dog	&Dog::operator =(const Dog &other)
{
	std::cout << "Dog assignation operator called" << std::endl;
	if (this != &other)
	{
		Animal::operator=(other);
		*this->_brain = *other._brain;
	}
	return (*this);
}

void	Dog::makeSound(void) const
{
	const int	random_index = std::rand() % DOG_SOUNDS_COUNT;

	std::cout << _sounds[random_index] << std::endl;
}

void	Dog::readMyMind(void) const
{
	const int	index = std::rand() % 10;
	const std::string random_thoughts[10] = {
		"I'm hungry.",
		"Hope I get a treat.",
		"Hope I get a walk.",
		"I have to pee.",
		"I have to poop.",
		"I love my Hooman.",
		"Cats are weird.",
		"If I could talk, I'd say Hi.",
		"If I start digging, I'll find a bone.",
		"Squirrel!!!"
	};
	int	random_index = std::rand() % 100;
	if (random_index == 0)
		random_index = 1;
	std::cout << "Inside dog's brain: My favorite Hooman name is ";
	std::cout << this->_brain->getIdea(0) + ".";
	std::cout << std::endl;
	this->_brain->setIdea(random_index, random_thoughts[index]);
	std::cout << "Inside dog's brain: " << this->_brain->getIdea(random_index);
	std::cout << std::endl;
}

void	Dog::setOwner(std::string owner_name)
{
	this->_brain->setIdea(0, owner_name);
}
