/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vehiculo.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschirad <jschirad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 09:51:41 by jschirad          #+#    #+#             */
/*   Updated: 2020/09/11 10:08:29 by jschirad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEHICULO_HPP
#define VEHICULO_HPP

# include <iostream>
# include <string.h>

class	vehiculo {
	private:
		std::string	marca;
		std::string	color;
	protected:
		std::string	modelo;
		std::string getModelo();
	public:
		vehiculo(std::string marca, std::string color, std::string modelo);
		~vehiculo();

		std::string	getMarca();
		std::string	getColor();
};

#endif
