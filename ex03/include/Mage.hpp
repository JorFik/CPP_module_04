/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Mage.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <Jfikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 17:42:45 by JFikents          #+#    #+#             */
/*   Updated: 2024/08/28 20:27:32 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAGE_HPP
# define MAGE_HPP

# include <string>
# include "ICharacter.hpp"
# include "AMateria.hpp"

# define INVENTORY_FULL "Can't equip more than 4 materias."
# define INVALID_SLOT "Invalid inventory slot."
# define INVENTORY_SLOT_EMPTY "Inventory slot is empty, Mage used the magic of an akward silence."
# define MAGE_UNEQUIPPED_MSG this->getName() << " unequipped " << _inventory[inventory_slot]->getType() << "."
# define MAGE_EQUIPPED_MSG this->getName() << " equipped " << m->getType() << " materia in slot " << inventory_slot << "."
# define MAGE_USED_MSG this->getName() << " used " << _inventory[inventory_slot]->getType() << "."
# define INVALID_MATERIA "Unable to equip this unknown materia."

class Mage : public ICharacter
{
	private:
		std::string	_name;
		AMateria	*_inventory[4];

	public:
		Mage(std::string const &name);
		~Mage() override;
		Mage(Mage const &other);
		Mage	&operator =(Mage const &other);

		const std::string	&getName(void) const override;
		void				equip(AMateria *m) override;
		void				unequip(int idx) override;
		void				use(int idx, ICharacter &target) override;
};

#endif