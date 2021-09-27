#pragma once
#include "SFML/Graphics.hpp"
#include "iostream"
#include "Menu.h"
using namespace std;
using namespace sf;

class Menu
{
public:
	Menu(int resolX, int ResolY, string titulo);
	void Gameloop();
	void Dibujar();
	void Eventos();

private:
	RenderWindow* MenuInicial;
	Event* Evento;
};

