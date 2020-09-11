/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschirad <jschirad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 15:11:33 by jschirad          #+#    #+#             */
/*   Updated: 2020/09/11 15:14:35 by jschirad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "clasederivada.hpp"
#include <iostream>

// Aqui podemos observar como actuan los constructores y destructores usando herencia.
int	main()
{
	clasederivada *obj = new clasederivada(5, 10);
	std::cout << std::endl;
	delete obj;
	return (0);
}
