/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschirad <jschirad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 13:18:03 by jschirad          #+#    #+#             */
/*   Updated: 2020/09/20 13:22:23 by jschirad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

# include <iostream>
# include <string.h>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{
private:
	NinjaTrap();
public:
	NinjaTrap(std::string const &name);
	NinjaTrap(NinjaTrap const &obj);
	~NinjaTrap();

	NinjaTrap &operator=(NinjaTrap const &obj);

	void	ninjaShoebox(FragTrap &trap);
	void	ninjaShoebox(ScavTrap &trap);
	void	ninjaShoebox(ClapTrap &trap);
	void	ninjaShoebox(NinjaTrap &trap);
};

#endif
