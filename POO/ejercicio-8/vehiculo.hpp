/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vehiculo.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschirad <jschirad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/06 16:25:11 by jschirad          #+#    #+#             */
/*   Updated: 2020/09/06 16:53:16 by jschirad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEHICULO_HPP
# define VEHICULO_HPP

# include <iostream>
# include <string>

class vehiculo
{
private:
	std::string	marca;
	std::string	modelo;
	float	precio;
public:
	vehiculo(std::string marca, std::string modelo, float precio);
	vehiculo();
	~vehiculo();
	float	getPrecio();
	void	mostarDatos();
	static int	masBarato(vehiculo coches[], int n);
};

#endif
