#pragma once
#include "SFML/Graphics.hpp"
#include "iostream"

using namespace sf;
using namespace std;

class Nivel1
{
public:
	Nivel1(int resolX, int ResolY, string titulo);
	void gameLoop();
	void Dibujar();
	void Eventos();
	bool Coliciones();

	RectangleShape setRectangulo(float alto, float ancho, float x, float y) { //crea un rectangulo
		RectangleShape rectangulo(Vector2f(alto, ancho));
		rectangulo.setPosition(x, y);
		return rectangulo;
	}
	~Nivel1 ();

private:
	RenderWindow* VentanaInicio;
	Texture* textura1;
	Sprite* sprite1;
	Event* evento;
	RectangleShape muro1;
};
