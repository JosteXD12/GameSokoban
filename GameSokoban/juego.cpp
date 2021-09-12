#include "juego.h"

juego::juego(int resolX, int resolY, string titulo) 
{

	VentanaInicio = new RenderWindow(VideoMode(resolX, resolY),titulo);
	VentanaInicio->setFramerateLimit(120);

	textura1 = new Texture;
	sprite1 = new Sprite;

	textura1->loadFromFile("Imagenes/3.png");
	sprite1->setTexture(*textura1);

	gameLoop();
}

void juego::gameLoop() {
	while (VentanaInicio->isOpen()) 
	{
		Dibujar();
	}
}

void juego::Dibujar()
{
	VentanaInicio->clear();
	VentanaInicio->draw(*sprite1);
	VentanaInicio->display();
}