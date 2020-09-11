Herencia Publica:

En general, herencia publica significa que una clase derivada tiene acceso a los elementos publicos y protejidos de su clase base. Los elementos publicos se heredan como elementos publicos; los elementos protegidos permanecen protegidos y los elementos privados no se heredan.

class ClaseDerivada: public	ClaseBase {
	private:
		//Atributos privados
	public:
		//Metodos publicos
	protected:
		//Atributos protegidos
}


Herencia Privada:

Con la herencia privada, los miembros publicos y protegidos de la clase base se vuelven miembros privados de la clase derivada. En efecto, los usuarios de la clase derivada no tienen acceso a las facilidades proporcionadas por la clase base. Los miembros privados de la clase base son inaccesibles a las funciones miembro de la clase derivada.

class ClaseDerivada : private ClaseBase {
	private:

	public:

	protected;
}



Herencia protegida:

Con herencia protegida, los miembros publicos y protegidos de la clase base se convierten en miembros protegidos de la clase derivada y los miembros privados de la clase base se vuelven inaccesibles.

class ClaseDerivada : protected ClaseBase {
	private:

	public:

	protected:
}
