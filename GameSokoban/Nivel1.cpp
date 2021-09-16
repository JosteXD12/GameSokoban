#include "Nivel1.h"

Nivel1::Nivel1(int resolX, int resolY, string titulo)
{

	VentanaInicio = new RenderWindow(VideoMode(resolX, resolY), titulo);
	VentanaInicio->setFramerateLimit(120);

	textura1 = new Texture;
	sprite1 = new Sprite;
	textura1->loadFromFile("Imagenes/3.png");
	sprite1->setTexture(*textura1);

	muro1 = setRectangulo(32, 128, 200, 200);
	evento = new Event;
	gameLoop();
}

void Nivel1::gameLoop() {
	while (VentanaInicio->isOpen())
	{
		Dibujar();
		Eventos();
	}
}

void Nivel1::Dibujar()
{
	VentanaInicio->clear();
	VentanaInicio->draw(*sprite1);
	VentanaInicio->draw(muro1); // el muro que es un rectangulo
	VentanaInicio->display();
}

void Nivel1::Eventos() {
	while (VentanaInicio->pollEvent(*evento)) {
		switch (evento->type)
		{
		case Event::Closed:
			VentanaInicio->close();
			exit(0);
			break;
		case Event::KeyPressed:
			//derecha
			if (evento->key.code == Keyboard().D || evento->key.code == Keyboard().Right) {
				if (Coliciones() != true) {
					sprite1->setPosition(sprite1->getPosition().x + 16, sprite1->getPosition().y);
				}
				if (Coliciones() == true) {
					sprite1->setPosition(sprite1->getPosition().x - 16, sprite1->getPosition().y);
				}
			}
			//izquierda
			if (evento->key.code == Keyboard().A || evento->key.code == Keyboard().Left) {
				if (Coliciones() != true) {
					sprite1->setPosition(sprite1->getPosition().x - 16, sprite1->getPosition().y);
				}
				if (Coliciones() == true) {
					sprite1->setPosition(sprite1->getPosition().x + 16, sprite1->getPosition().y);
				}
			}
			//bjaar
			if (evento->key.code == Keyboard().S || evento->key.code == Keyboard().Down) {
				if (Coliciones() != true) {
					sprite1->setPosition(sprite1->getPosition().x, sprite1->getPosition().y + 16);
				}
				if (Coliciones() == true) {
					sprite1->setPosition(sprite1->getPosition().x, sprite1->getPosition().y - 16);
				}
			}
			// subir
			if (evento->key.code == Keyboard().W || evento->key.code == Keyboard().Up) {
				if (Coliciones() != true) {
					sprite1->setPosition(sprite1->getPosition().x, sprite1->getPosition().y - 16);
				}
				if (Coliciones() == true) {
					sprite1->setPosition(sprite1->getPosition().x, sprite1->getPosition().y + 16);
				}
			}
		}

	}
}
bool Nivel1::Coliciones() {
	if (sprite1->getGlobalBounds().intersects(muro1.getGlobalBounds())) { return true; } //colosion pj con rectangulo
}