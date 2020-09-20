/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschirad <jschirad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 12:37:04 by jschirad          #+#    #+#             */
/*   Updated: 2020/09/20 12:52:17 by jschirad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string.h>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
	ScavTrap();
protected:
	static std::string challenge[6];
public:
	ScavTrap(std::string const &name);
	ScavTrap(ScavTrap const &obj);
	~ScavTrap();

	ScavTrap &operator=(ScavTrap const &obj);

	void	challengeNewcomer();
};

#endif
