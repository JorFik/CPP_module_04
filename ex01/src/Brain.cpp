/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <Jfikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 18:47:00 by JFikents          #+#    #+#             */
/*   Updated: 2024/08/27 19:21:28 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(const Brain &other)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = other;
}

Brain	&Brain::operator =(const Brain &other)
{
	std::cout << "Brain assignation operator called" << std::endl;
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = other._ideas[i];
	}
	return (*this);
}

std::string	Brain::getIdea(int index) const
{
	if (index < 0 || index >= 100)
		return (std::cerr << "Invalid index", "");
	return (this->_ideas[index]);
}

void	Brain::setIdea(int index, std::string idea)
{
	if (index < 0 || index >= 100)
		return (std::cerr << "Invalid index", (void)0);
	this->_ideas[index] = idea;
}
