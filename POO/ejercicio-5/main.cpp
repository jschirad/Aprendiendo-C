/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschirad <jschirad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 12:38:33 by jschirad          #+#    #+#             */
/*   Updated: 2020/09/03 12:41:36 by jschirad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "estudiante.hpp"

int main()
{
	Estudiante *estudiante1 = new Estudiante("42WK", 10.5, 132, "jschirad@student.com");

	estudiante1->mostarDatos();

	return (0);
}
