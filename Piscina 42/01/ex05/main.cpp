/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 11:11:44 by marvin            #+#    #+#             */
/*   Updated: 2020/07/09 10:07:48 by jschirad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Human.hpp"
#include <iostream>

int main()
{
	Human bob;
	std::cout << "Bob identifier-- : "<< bob.identify() << std::endl;
	std::cout << "Barin identifier : " << bob.getBrain().identify() << std::endl;
}
