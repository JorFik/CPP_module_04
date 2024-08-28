/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <Jfikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 17:31:20 by JFikents          #+#    #+#             */
/*   Updated: 2024/08/28 20:21:36 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

#include <iostream>

Ice::Ice() : AMateria("ice") {};

Ice::Ice(Ice const &other) : AMateria(other) {};

Ice	&Ice::operator =(Ice const &other)
{
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

AMateria	*Ice::clone(void) const
{
	return (new Ice());
}

void		Ice::use(ICharacter &target) const
{
	std::cout << "* shoots an ice bolt at " << target.getName() + " *";
	std::cout << std::endl;
}
