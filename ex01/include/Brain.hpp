/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <Jfikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 18:46:40 by JFikents          #+#    #+#             */
/*   Updated: 2024/08/27 18:57:32 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>

class Brain
{
	private:
		std::string _ideas[100];

	public:
		Brain();
		~Brain();
		Brain(const Brain &other);
		Brain	&operator =(const Brain &other);

		std::string	getIdea(int index) const;
		void		setIdea(int index, std::string idea);
};

#endif