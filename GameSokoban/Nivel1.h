#pragma once
#include "SFML/Graphics.hpp"
#include "iostream"
#include "Menu.h"
using namespace std;
using namespace sf;

class Nivel1
{
public:
	Nivel1(int resolX, int ResolY, string titulo);
	void Gameloop();
	void Dibujar();
	void Eventos();
	bool Colisiones();
	
	RectangleShape setRectangulo(float alto, float ancho, float x, float y)
	{ //crea un rectangulo
		RectangleShape rectangulo(Vector2f(alto, ancho));
		rectangulo.setPosition(x, y);
		return rectangulo;
	}
	~Nivel1();
private:

	RenderWindow* VentNivel1;
	Texture* textura1;
	Sprite* sprite1;
	Event* evento;
	RectangleShape muro1;
};

