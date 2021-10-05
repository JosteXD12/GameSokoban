#pragma once
#include "SFML/Graphics.hpp"
#include "iostream"
#include <stack>
#include <queue>
using namespace std;
using namespace sf;

class juego
{
public:
	juego(int resolX, int ResolY, string titulo);
	void objetosMenu();
	void objetosNivel1();
	void objetosNivel2();
	void objetosNivel3();
	void objetosNivel4();
	void objetosNivel5();

	void Gameloop();
	void DibujarMenu();
	void DibujarAcercaDe();
	void DibujarAcercaDe2();

	void DibujarNivel1();
	void DibujarNivel2();
	void DibujarNivel3();
	void DibujarNivel4();
	void DibujarNivel5();

	void Eventos();
	bool Colisiones();
	bool ColisionesCajaJugador();
	bool ColisionesCajaJugador2();
	bool ColisionesCajaJugador3();
	bool ColisionesCajaPared();
	bool ColisionesCaja2Pared();
	bool ColisionesCaja3Pared();

	void ColisionCajasMeta();
	int ColisionMouse();
	void guardarJuego();
	void cargarJuego();
	void pasarNivel();

	void validarPuntos();

	void vaciarCola() {
		if (contarPuntos.empty()) {
			contarPuntos.push(0);
		}
		if (contarPuntos.front()>0) {
			contarPuntos.pop();
			contarPuntos.push(0);
		}
		
	}
	void llenarCola(int);
	
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
	Texture *textura[15]; // del 0 al 4 guarda las texturas del personaje
						  // 5 es el background
						  // 6 muros horizontales
					      // 7 meta
					      // 8 muros verticales
	                      // 9 menu
						  // 10 al 12 muros interiores
					      // 13 y 14 fondo acerca de
	Sprite* sprite1;
	Event* evento;
	RectangleShape muro[20]; // Son los rectangulos que usaremos
	RectangleShape boton[8];
	RectangleShape caja[3];
	RectangleShape puntos[3];
	RectangleShape meta;
	Font* fuente;
	Text *textoBtn[8];
	Sprite fondo[4]; // 0 menu, 1 nivel1, 2 y 3 acerca de
	queue<int> contarPuntos;
};

