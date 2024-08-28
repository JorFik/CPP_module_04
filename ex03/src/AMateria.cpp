/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <Jfikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 16:30:53 by JFikents          #+#    #+#             */
/*   Updated: 2024/08/28 17:30:06 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) : _type(type) {}

AMateria::AMateria(AMateria const &other) : _type(other._type) {}

AMateria	&AMateria::operator =(AMateria const &other)
{
	if (this != &other)
		_type = other._type;
	return (*this);
}

const std::string	&AMateria::getType(void) const
{
	return (_type);
}
