/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <Jfikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 17:40:45 by JFikents          #+#    #+#             */
/*   Updated: 2024/08/28 19:43:16 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

#include <iostream>

Cure::Cure() : AMateria("cure") {};

Cure::Cure(Cure const &other) : AMateria(other) {};

AMateria	*Cure::clone(void) const
{
	return (new Cure());
}

void		Cure::use(ICharacter &target) const
{
	std::cout << "* heals " << target.getName() + "'s wounds *";
	std::cout << std::endl;
}
