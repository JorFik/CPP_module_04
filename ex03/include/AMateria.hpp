/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <Jfikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 16:31:22 by JFikents          #+#    #+#             */
/*   Updated: 2024/08/28 20:20:58 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <string>

class ICharacter;

class AMateria
{
	protected:
		std::string	_type;
		AMateria() = default;
		AMateria(std::string const &type);

	public:
		virtual ~AMateria() = default;
		AMateria(AMateria const &other);
		AMateria	&operator =(AMateria const &other);

		const std::string	&getType(void) const;

		virtual AMateria	*clone(void) const = 0;
		virtual void		use(ICharacter &target) const = 0;
};

#endif