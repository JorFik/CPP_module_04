/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <Jfikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 17:37:54 by JFikents          #+#    #+#             */
/*   Updated: 2024/08/27 20:39:58 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include <string>
# include "Brain.hpp"

# define DOG_SOUNDS_COUNT 2

class Dog : public Animal
{
	private:
		static const std::string _sounds[DOG_SOUNDS_COUNT];
		Brain	*_brain;

	public:
		Dog();
		~Dog() override;
		Dog(const Dog &other);
		Dog	&operator =(const Dog &other);

		void	makeSound(void) const override;
		void	readMyMind(void) const override;
		void	setOwner(std::string owner_name) override;
};

#endif