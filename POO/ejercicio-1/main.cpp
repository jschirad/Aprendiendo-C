//
//

#include <iostream>
#include "punto.hpp"

int	main()
{
	punto	p1(2, 1);  // Creacion de un objeto estatico
	std::cout << "El valor de X es : "<< p1.getX() << std::endl;
	std::cout << "El valor de Y es : "<< p1.getY() << std::endl;

	punto	*p2 = new punto(); // Creacion de un objeto dinamico
	p2->setX(5);
	p2->setY(8);
	std::cout << "El valor de X es : "<< p2->getX() << std::endl;
	std::cout << "El valor de Y es : "<< p2->getY() << std::endl;
	delete p2; // Liberamos la memoria ocupada por el objeto dinamico

	return (0);
}
