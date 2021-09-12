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
	//~juego ();

private:
	RenderWindow *VentanaInicio;
	Texture *textura1;
	Sprite *sprite1;
};

