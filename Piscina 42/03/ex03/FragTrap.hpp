/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschirad <jschirad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 12:04:46 by jschirad          #+#    #+#             */
/*   Updated: 2020/09/14 14:43:44 by jschirad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

# include <iostream>
# include <string.h>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
	FragTrap();
protected:
	static const int nQuotes = 6;
	static std::string quotes[FragTrap::nQuotes];
public:
	FragTrap(std::string const &name);
	FragTrap(FragTrap const &obj);
	~FragTrap();

	FragTrap &operator=(FragTrap const &obj);

	void	vaulthunter_dot_exe(std::string const &target);
};

#endif
