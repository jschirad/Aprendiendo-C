/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschirad <jschirad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 10:36:58 by jschirad          #+#    #+#             */
/*   Updated: 2020/09/07 10:40:34 by jschirad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>
# include <string.h>

class pony
{
private:
	std::string	name;
	std::string	color;
	int			age;
public:
	pony();
	~pony();

	void	getPony(std::string name, std::string color, int age);
};

#endif
