/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MagicStaff.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <Jfikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 18:57:13 by JFikents          #+#    #+#             */
/*   Updated: 2024/08/28 20:33:30 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MagicStaff.hpp"
#include <iostream>

MagicStaff::MagicStaff()
{
	for (int i = 0; i < 4; i++)
		_learned_materia[i] = nullptr;
}

MagicStaff::~MagicStaff()
{
	for (int i = 0; i < 4; i++)
	{
		if (_learned_materia[i])
			delete _learned_materia[i];
	}
}

MagicStaff::MagicStaff(MagicStaff const &other) : MagicStaff()
{
	for (int i = 0; i < 4; i++)
	{
		if (other._learned_materia[i])
			_learned_materia[i] = other._learned_materia[i]->clone();
	}
}

MagicStaff	&MagicStaff::operator =(MagicStaff const &other)
{
	if (this == &other)
		return (*this);
	for (int i = 0; i < 4; i++)
	{
		if (this->_learned_materia[i])
			delete this->_learned_materia[i];
		this->_learned_materia[i] = nullptr;
		if (other._learned_materia[i])
			this->_learned_materia[i] = other._learned_materia[i]->clone();
	}
	return (*this);
}

void	MagicStaff::learnMateria(AMateria *m)
{
	int	learned_slot = 0;

	while (learned_slot < 4 && _learned_materia[learned_slot] != nullptr)
		learned_slot++;
	if (learned_slot == 4)
		return std::cout << NO_SPACE << std::endl, void();
	if (m == nullptr)
		return std::cout << CAN_NOT_LEARN << std::endl, void();
	_learned_materia[learned_slot] = m;
	std::cout << LEARNED_MSG << std::endl;
}

AMateria	*MagicStaff::createMateria(std::string const &type)
{

	for (int i = 0; i < 4; i++)
	{
		if (_learned_materia[i] && _learned_materia[i]->getType() == type)
			return (_learned_materia[i]->clone());
	}
	std::cout << UNKOWN_TYPE << std::endl;
	return (nullptr);
}
