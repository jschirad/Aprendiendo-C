/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 10:47:52 by marvin            #+#    #+#             */
/*   Updated: 2020/07/07 10:47:52 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main()
{
	std::string	str = std::string("HI THIS IS BRAIN");
	std::string	*str_ptr = &str;
	std::string	&str_ref = str;

	std::cout<<"Cadena : "<<str<<std::endl;
	std::cout<<"Puntero a la cadena : "<<*str_ptr<<std::endl;
	std::cout<<"Referencia a la cadena : "<<str_ref<<std::endl;
	return (0);
}
