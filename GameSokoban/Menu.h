#pragma once
#include "SFML/Graphics.hpp"
#include "iostream"
#include "Nivel1.h"

using namespace sf;
using namespace std;

class Menu
{
public:
	Menu(int resolX, int ResolY, string titulo);
	void gameLoop();
	void Dibujar();
	void IniciarBotones();
	void Eventos();

	~Menu();

private:
	RenderWindow* MenuIncio;
	RectangleShape* opcionesDeMenu[4]; 
	Event* evento1;
	

};

