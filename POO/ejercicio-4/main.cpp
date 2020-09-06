/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschirad <jschirad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 11:55:41 by jschirad          #+#    #+#             */
/*   Updated: 2020/09/03 11:58:44 by jschirad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include "perro.hpp"

int main()
{
	perro perro1("Fido", "Chiguagua");
	perro1.mostrarDatos();
	perro1.jugar();

	perro *perro2 = new perro("Julio", "caniche");
	perro2->mostrarDatos();
	perro2->jugar();
	delete perro2;
	return (0);
}
