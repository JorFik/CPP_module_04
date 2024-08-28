/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Mage.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <Jfikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 17:42:35 by JFikents          #+#    #+#             */
/*   Updated: 2024/08/28 20:37:22 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Mage.hpp"
#include <iostream>

Mage::Mage(std::string const &name) : _name(name)
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = nullptr;
}

Mage::~Mage()
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i])
			delete _inventory[i];
	}
}

Mage::Mage(Mage const &other) : Mage(other._name)
{
	for (int i = 0; i < 4; i++)
	{
		if (other._inventory[i])
			_inventory[i] = other._inventory[i]->clone();
	}
}

Mage	&Mage::operator =(Mage const &other)
{
	if (this == &other)
		return (*this);
	_name = other._name;
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
		this->_inventory[i] = nullptr;
		if (other._inventory[i])
			this->_inventory[i] = other._inventory[i]->clone();
	}
	return (*this);
}

const std::string	&Mage::getName(void) const
{
	static std::string	format_name;
	format_name = "The Mighty Mage " + this->_name;
	return (format_name);
}

void	Mage::equip(AMateria *m)
{
	int	inventory_slot = 0;

	if (m == nullptr)
		return (std::cout << INVALID_MATERIA << std::endl, void());
	while (inventory_slot < 4 && _inventory[inventory_slot] != nullptr)
		inventory_slot++;
	if (inventory_slot == 4)
		return (std::cout << INVENTORY_FULL << std::endl, void());
	_inventory[inventory_slot] = m;
	std::cout << MAGE_EQUIPPED_MSG << std::endl;
}

void	Mage::unequip(int inventory_slot)
{
	if (inventory_slot < 0 || inventory_slot >= 4)
		return (std::cout << INVALID_SLOT << std::endl, void());
	if (_inventory[inventory_slot] != nullptr)
		std::cout << MAGE_UNEQUIPPED_MSG << std::endl;
	this->_inventory[inventory_slot] = nullptr;
}

void	Mage::use(int inventory_slot, ICharacter &target)
{
	if (inventory_slot < 0 || inventory_slot >= 4)
		return (std::cout << INVALID_SLOT << std::endl, void());
	if (_inventory[inventory_slot] == nullptr)
		return (std::cout << INVENTORY_SLOT_EMPTY << std::endl, void());
	std::cout << MAGE_USED_MSG << std::endl;
	_inventory[inventory_slot]->use(target);
	delete _inventory[inventory_slot];
	_inventory[inventory_slot] = nullptr;
}
