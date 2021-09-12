#include "SFML/Graphics.hpp"
#include "iostream"
#include "figuras.h"
#include "juego.h"

using namespace sf;
using namespace std;
int main() 
{
	juego* partida;
	partida = new juego(800, 600, " Inicio ");
}
//bool GameOver = false;
	//RenderWindow* ventanaInicio;
	//ventanaInicio = new RenderWindow(VideoMode(800, 600, 64), "Inicio");

	//while (!GameOver) {
	//	ventanaInicio->display();
	//}
	//
	////// para que la ventana se pueda cerrar con la x
	////RectangleShape rec = Rectangulo(20, 50, 200, 200);
	////while (ventana.isOpen()) {
	////	Event evento;
	////	while (ventana.pollEvent(evento)) {
	////		switch (evento.type)
	////		{
	////		case Event::Closed:
	////			ventana.close();
	////		}
	////		ventana.clear();
	////		//ventana.draw(Circulo(50,100,100));
	////		ventana.draw(rec);
	////		ventana.display();
	////	}
	////} 
	////} 
//case Event::KeyPressed:
//	if (evento.key.code == Keyboard().D || evento.key.code == Keyboard().Left) {
//		rec.setPosition(rec.getPosition().x + 10, rec.getPosition().y);
//	}
//	if (evento.key.code == Keyboard().A || evento.key.code == Keyboard().Right) {
//		rec.setPosition(rec.getPosition().x - 10, rec.getPosition().y);
//	}
//	if (evento.key.code == Keyboard().S || evento.key.code == Keyboard().Down) {
//		rec.setPosition(rec.getPosition().x, rec.getPosition().y + 10);
//	}
//	if (evento.key.code == Keyboard().W || evento.key.code == Keyboard().Up) {
//		rec.setPosition(rec.getPosition().x, rec.getPosition().y - 10);
//	}
			

