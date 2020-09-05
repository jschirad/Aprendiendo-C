// Definimos los metodos de la clase

#include <iostream>
#include "punto.hpp"

punto::punto(int _x, int _y)
{
	x = _x; // Reemplazamos los valores
	y = _y; // De esta forma guardamos los valores en los atributos de la clase
}

punto::punto()
{
	x = y = 0; // Constructor por defecto, setea valores en cero.
}

punto::~punto()
{
	std::cout << "Point destroy" << std::endl;
	// Liberamos la memoria, ya sea estatica como dinamica.
}

void punto::setX(int valorX)
{
	x = valorX;
}

void punto::setY(int valorY)
{
	y = valorY;
}

int punto::getX()
{
	return x;
}

int punto::getY()
{
	return y;
}
