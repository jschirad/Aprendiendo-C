/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschirad <jschirad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 12:37:04 by jschirad          #+#    #+#             */
/*   Updated: 2020/09/14 14:44:16 by jschirad         ###   ########.fr       */
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
	static const int nChallenge = 6;
	static std::string challenge[ScavTrap::nChallenge];
public:
	ScavTrap(std::string const &name);
	ScavTrap(ScavTrap const &obj);
	~ScavTrap();

	ScavTrap &operator=(ScavTrap const &obj);

	void	challengeNewcomer();
};

#endif
