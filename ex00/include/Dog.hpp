/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <Jfikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 17:37:54 by JFikents          #+#    #+#             */
/*   Updated: 2024/08/27 18:18:22 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

# define DOG_SOUNDS_COUNT 2

class Dog : public Animal
{
	private:
		static const std::string _sounds[DOG_SOUNDS_COUNT];

	public:
		Dog();
		~Dog() override;
		Dog(const Dog &other);
		Dog	&operator =(const Dog &other);

		void	makeSound(void) const override;
};

#endif