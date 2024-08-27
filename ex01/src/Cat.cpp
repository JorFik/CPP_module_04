/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <Jfikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 17:08:55 by JFikents          #+#    #+#             */
/*   Updated: 2024/08/27 20:53:08 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>
#include <ctime>
#include <cstdlib>

const std::string Cat::_sounds[CAT_SOUNDS_COUNT] =
	{"Cat: \"Meow\"", "Cat: \"Purr\"", "Cat: \"Hiss\""};

Cat::Cat() : Animal("Cat")
{
	std::srand(static_cast<unsigned int>(std::time(0)));
	std::cout << "Cat default constructor called" << std::endl;
	this->_brain = new Brain();
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete this->_brain;
}

Cat::Cat(const Cat &other) : Animal(other)
{
	std::srand(static_cast<unsigned int>(std::time(0)));
	std::cout << "Cat copy constructor called" << std::endl;
	this->_brain = new Brain(*other._brain);
}

Cat	&Cat::operator =(const Cat &other)
{
	std::cout << "Cat assignation operator called" << std::endl;
	if (this != &other)
	{
		*this->_brain = *other._brain;
		Animal::operator=(other);
	}
	return (*this);
}

void	Cat::makeSound(void) const
{
	const int	random_index = std::rand() % CAT_SOUNDS_COUNT;

	std::cout << _sounds[random_index] << std::endl;
}

void	Cat::readMyMind(void) const
{
	const int	index = std::rand() % 10;
	const std::string random_thoughts[10] = {
		"I hate my Hooman.",
		"Why do I have to poop in a box?",
		"Dogs are so annoying!",
		"I'm hungry, Hooman give me food!",
		"I'm bored.",
		"I'm going to knock something off the table.",
		"I'm going to scratch the couch ^_^",
		"I'm going to sleep.",
		"Someone should get rid of the mouse at home >_<",
		"My Hooman is working, I'll sit on the keyboard :D"
	};
	int	random_index = std::rand() % 100;

	if (random_index == 0)
		random_index = 1;
	std::cout << "Inside cat's brain: My owner's name is ";
	std::cout << this->_brain->getIdea(0) + ".";
	std::cout << std::endl;
	this->_brain->setIdea(random_index, random_thoughts[index]);
	std::cout << "Inside cat's brain: " << this->_brain->getIdea(random_index);
	std::cout << std::endl;
}

void	Cat::setOwner(std::string owner_name)
{
	this->_brain->setIdea(0, owner_name);
}
