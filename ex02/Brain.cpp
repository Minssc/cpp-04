/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <minsunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 18:12:05 by minsunki          #+#    #+#             */
/*   Updated: 2022/03/27 14:09:35 by minsunki         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain(void)
{
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &b)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = b;
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called" << std::endl;
}

const Brain	&Brain::operator=(const Brain &b)
{
	for(int i = 0; i < N_IDEAS; ++i)
		ideas[i] = b.getIdea(i);
	return (*this);
}

const std::string	&Brain::getIdea(int idx) const
{
	return (ideas[idx]);
}

void	Brain::setIdea(int idx, const std::string &idea)
{
	ideas[idx] = idea;
}