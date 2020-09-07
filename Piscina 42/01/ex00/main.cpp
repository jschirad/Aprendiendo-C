/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschirad <jschirad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 10:48:02 by jschirad          #+#    #+#             */
/*   Updated: 2020/09/07 10:50:30 by jschirad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "pony.hpp"
# include <iostream>

void	ponyOnHeap()
{
	pony	*roberto = new pony();

	roberto->getPony("Roberto", "Red", 42);

	delete roberto;
}

void	ponyOnStack()
{
	pony	sergio;

	sergio.getPony("Sergio", "green", 26);
}

int	main()
{
	std::cout<<"|------- PONY ON THE HEAP ---------|"<<std::endl;
	ponyOnHeap();
	std::cout<<std::endl;

	std::cout<<"|------- PONY ON THE STACK --------|"<<std::endl;
	ponyOnStack();
	std::cout<<std::endl;

	return (0);

}
