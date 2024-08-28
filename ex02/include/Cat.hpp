/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <Jfikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 17:06:44 by JFikents          #+#    #+#             */
/*   Updated: 2024/08/27 20:39:38 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include <string>
# include "Brain.hpp"

# define CAT_SOUNDS_COUNT 3

class Cat : public Animal
{
	private:
		static const std::string _sounds[CAT_SOUNDS_COUNT];
		Brain	*_brain;

	public:
		Cat();
		~Cat() override;
		Cat(const Cat &other);
		Cat	&operator =(const Cat &other);

		void	makeSound(void) const override;
		void	readMyMind(void) const override;
		void	setOwner(std::string owner_name) override;
};

#endif