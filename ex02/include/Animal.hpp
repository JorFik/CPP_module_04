/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <Jfikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:13:14 by JFikents          #+#    #+#             */
/*   Updated: 2024/08/28 14:06:35 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>

class Animal
{
	protected:
		std::string _type;
		Animal(std::string type);

	public:
		Animal();
		virtual ~Animal();
		Animal(const Animal &other);
		Animal &operator=(const Animal &other);

		std::string getType(void) const;
		virtual void	makeSound(void) const = 0;
		virtual void	readMyMind(void) const = 0;
		virtual void	setOwner(std::string owner_name) = 0;
};

#endif