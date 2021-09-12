#include "SFML/Graphics.hpp"
#include "iostream"
#include "figuras.h"

using namespace sf;
using namespace std;
int main() {
	RenderWindow ventana(VideoMode(800, 600, 64), "mi Ventana");
	// para que la ventana se pueda cerrar con la x
	RectangleShape rec = Rectangulo(20, 50, 200, 200);
	while (ventana.isOpen()) {
		Event evento;
		while (ventana.pollEvent(evento)) {
			switch (evento.type)
			{
			case Event::Closed:
				ventana.close();
			}
			ventana.clear();
			//ventana.draw(Circulo(50,100,100));
			ventana.draw(rec);
			ventana.display();
		}
		return 0;
	}
