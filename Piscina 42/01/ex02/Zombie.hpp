/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 08:22:28 by marvin            #+#    #+#             */
/*   Updated: 2020/07/10 09:32:17 by jschirad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <iomanip>

class Zombie
{
private:
	std::string		type;
	std::string		name;

public:
	Zombie();
	Zombie(std::string type, std::string name);
	~Zombie();

	void	announce();
	void	setName(std::string name);
	void	setType(std::string	type);
	std::string	getName();
	std::string	getType();
};

#endif
