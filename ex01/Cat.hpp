/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <minsunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 17:14:44 by minsunki          #+#    #+#             */
/*   Updated: 2022/03/27 14:04:47 by minsunki         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_HPP__
# define __CAT_HPP__

# include "Brain.hpp"
# include "Animal.hpp"

class Cat: public Animal
{
	private:
		Brain	*brain;

	public:
		Cat(void);
		Cat(const Cat &c);
		~Cat(void);

		const Cat	&operator=(const Cat &c);

		Brain	*getBrain(void) const;
		void	setBrain(int idx, const std::string &idea) const;
		void	makeSound(void) const;
};

# endif