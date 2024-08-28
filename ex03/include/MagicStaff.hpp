/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MagicStaff.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <Jfikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 18:55:51 by JFikents          #+#    #+#             */
/*   Updated: 2024/08/28 20:31:15 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAGICSTAFF_HPP
# define MAGICSTAFF_HPP

# include <string>
# include "AMateria.hpp"
# include "IMateriaSource.hpp"

# define NO_SPACE "Can't learn more than 4 materias."
# define UNKOWN_TYPE "Unknown materia type, the spell fizzles out in nothingness."
# define LEARNED_MSG "Learned " << m->getType() << " materia."
# define CAN_NOT_LEARN "Can't learn this unknown materia."

class MagicStaff : public IMateriaSource
{
	private:
		AMateria	*_learned_materia[4];

	public:
		MagicStaff();
		~MagicStaff() override;
		MagicStaff(MagicStaff const &other);
		MagicStaff	&operator =(MagicStaff const &other);

		void		learnMateria(AMateria *m) override;
		AMateria	*createMateria(std::string const &type) override;
};

#endif