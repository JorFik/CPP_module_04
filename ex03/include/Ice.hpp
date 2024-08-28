/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <Jfikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 17:30:29 by JFikents          #+#    #+#             */
/*   Updated: 2024/08/28 19:44:20 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		~Ice() override = default;
		Ice(Ice const &other);
		Ice	&operator =(Ice const &other);

		AMateria	*clone(void) const override;
		void		use(ICharacter &target) const override;
};

#endif