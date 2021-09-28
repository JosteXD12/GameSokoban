#pragma once
#include "SFML/Graphics.hpp"
#include "iostream"
#include "Nivel1.h"
using namespace std;
using namespace sf;

class Pantalla {
private:
	RenderWindow* pantalla;
	class nivel;
public:
	void setPantalla() {
		pantalla = new RenderWindow(VideoMode(800, 600), "Sokoban");
		pantalla->display();
	}
	RenderWindow* getPantalla() {
		return pantalla;
	}
	Pantalla();
};
Pantalla::Pantalla() {
	setPantalla();
}