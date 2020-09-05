// Que es una clase ?
// Una clase es un conjunto de objetos que comparten una estructura y comportamientos comunes.
// Que es un objeto?
// En programacion es todo aquello que tiene atributos y metodos.

// Declaracion de una clase
// Archivo punto h, archivo de cabezera.
#ifndef PUNTO_HPP
# define PUNTO_HPP

#include <iostream>

class punto
{
	// Atributos
private:
	int	x;
	int	y;

	// Metodos
public:
	punto(int _x, int _y); // Constructor
	punto(); // Constructor 2
	~punto(); // Destructor

	void setX(int valorX); // Establecemos el valor de X
	void setY(int valorY); // Establecemos el valor de Y

	int getX(); // Obtener el valor de X
	int getY(); // Obtener el valor de Y
};

#endif
