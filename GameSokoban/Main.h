#pragma once
#include "SFML/Graphics.hpp"
#include "iostream"
using namespace std;
using namespace sf;

class juego
{
public:
	juego(int resolX, int ResolY, string titulo);
	void objetosMenu();
	void objetosNivel1();
	void Gameloop();
	void DibujarMenu();
	void DibujarNivel1();
	void Eventos();
	bool Colisiones();
	bool ColisionesCajaJugador();
	bool ColisionesCajaPared();
	int ColisionMouse();
	void guardarJuego();
	void cargarJuego();
	
	RectangleShape setRectangulo(float ancho, float alto, float x, float y)
	{ //crea un rectangulo
		RectangleShape rectangulo(Vector2f(ancho, alto));
		rectangulo.setPosition(x, y);
		return rectangulo;
	}
	~juego();
private:
	int izquierda = 1, derecha = 1, arriba = 1, abajo = 1;  //Para que el sprite de la sensacion de movimiento
	int pantallaActual=0;
	RenderWindow* pantalla;
	Texture *textura[10]; // del 0 al 4 guarda las texturas del personaje
						  // 5 es el background
						  // 6 muros horizontales
					      // 7 meta
					      // 8 muros verticales
	                      // 9 menu
	Sprite* sprite1;
	Event* evento;
	RectangleShape muro[10]; // Son los rectangulos que usaremos
	RectangleShape boton[5];
	RectangleShape meta;
	Sprite fondo[2]; // 0 menu, 1 nivel1
};

