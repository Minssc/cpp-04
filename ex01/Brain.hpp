/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <minsunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 18:12:11 by minsunki          #+#    #+#             */
/*   Updated: 2022/03/27 14:04:25 by minsunki         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BRAIN_HPP__
# define __BRAIN_HPP__

# define N_IDEAS 100

# include <string>

class Brain
{
	private:
		std::string	ideas[N_IDEAS];

	public:
		Brain(void);
		Brain(const Brain &b);
		~Brain(void);

		const Brain	&operator=(const Brain &b);
		
		const std::string	&getIdea(int idx) const;
		void	setIdea(int idx, const std::string &idea);
};

# endif