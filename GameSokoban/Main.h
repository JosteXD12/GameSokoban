#pragma once
#include "SFML/Graphics.hpp"
#include "iostream"
using namespace std;
using namespace sf;

class juego
{
public:
	juego(int resolX, int ResolY, string titulo);
	void objetosPantalla();
	void Gameloop();
	void DibujarMenu();
	void DibujarNivel1();
	void Eventos();
	bool Colisiones();
	int ColisionMouse();
	
	RectangleShape setRectangulo(float ancho, float alto, float x, float y)
	{ //crea un rectangulo
		RectangleShape rectangulo(Vector2f(ancho, alto));
		rectangulo.setPosition(x, y);
		return rectangulo;
	}
	~juego();
private:
	int pantallaActual=0;
	RenderWindow* pantalla;
	Texture* textura1;
	Sprite* sprite1;
	Event* evento;
	RectangleShape muro[10]; // Son los rectangulos que usaremos
	RectangleShape boton[5];
};

