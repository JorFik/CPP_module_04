/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <Jfikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 19:05:33 by JFikents          #+#    #+#             */
/*   Updated: 2024/08/28 20:41:51 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Mage.hpp"
#include "MagicStaff.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include <iostream>

int	main(void)
{
	ICharacter	*mage = new Mage("Gandalf");
	Mage		target("Sauron");
	IMateriaSource	*staff = new MagicStaff();
	AMateria	*cure = new Cure();
	AMateria	*ice = new Ice();

	staff->learnMateria(nullptr);
	staff->learnMateria(cure->clone());
	staff->learnMateria(new Cure());
	staff->learnMateria(ice->clone());
	staff->learnMateria(new Ice());
	staff->learnMateria(ice);
	staff->learnMateria(nullptr);
	std::cout << std::endl;
	mage->equip(cure);
	mage->equip(ice);
	mage->equip(staff->createMateria("smoke"));
	mage->equip(staff->createMateria("cure"));
	mage->equip(staff->createMateria("ice"));
	mage->equip(staff->createMateria(""));
	std::cout << std::endl;
	mage->unequip(0);
	mage->use(0, target);
	mage->use(1, target);
	mage->unequip(1);
	mage->use(2, target);
	mage->use(3, target);
	mage->use(4, target);
	mage->use(1, target);
	std::cout << std::endl;
	delete cure;
	delete mage;
	cure = staff->createMateria("ice");
	mage = new Mage("Saruman");
	mage->equip(cure);
	mage->use(0, target);
	delete staff;
	delete mage;
	return (0);
}
