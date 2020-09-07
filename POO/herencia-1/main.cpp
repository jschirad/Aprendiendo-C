/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschirad <jschirad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 12:06:04 by jschirad          #+#    #+#             */
/*   Updated: 2020/09/07 12:16:16 by jschirad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "triangulo.hpp"
# include <iostream>

int	main()
{
	triangulo *t1 = new triangulo(3, 5, 6, 7);

	std::cout << "El numero de lados es : " <<t1->getLados();
	std::cout << std::endl;
	std::cout << "El area de la figura es : " <<t1->areaTriangulo();
	std::cout << std::endl;
	return (0);
}
