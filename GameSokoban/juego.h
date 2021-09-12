#pragma once
#include "SFML/Graphics.hpp"
#include "iostream"

using namespace sf;
using namespace std;

class juego 
{
public:
	juego (int resolX, int ResolY, string titulo);
	void gameLoop();
	void Dibujar();
	void Eventos();
	bool Coliciones();

	RectangleShape setRectangulo(float alto, float ancho, float x, float y) { //crea un rectangulo
		RectangleShape rectangulo(Vector2f(alto, ancho));
		rectangulo.setPosition(x, y);
		return rectangulo;
	}
	//~juego ();

private:
	RenderWindow *VentanaInicio;
	Texture *textura1;
	Sprite*sprite1;
	Event *evento;
	RectangleShape muro1;
};

