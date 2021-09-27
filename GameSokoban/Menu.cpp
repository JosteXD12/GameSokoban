#include "Menu.h"


Menu::Menu(int resolX, int resolY, string titulo)
{
	MenuIncio = new RenderWindow(VideoMode(resolX, resolY), titulo);
	MenuIncio->setFramerateLimit(120);

	IniciarBotones();
	evento1 = new Event;
	gameLoop();
}

void  Menu::IniciarBotones() {
	for (int i = 0; i < 4; i++)
	{
		opcionesDeMenu[i] = new RectangleShape({ 120,30 });
		opcionesDeMenu[i]->setFillColor(Color::Magenta);
	}
	opcionesDeMenu[0]->setPosition({ 340,200 });
	opcionesDeMenu[1]->setPosition({ 340,250 });
	opcionesDeMenu[2]->setPosition({ 340,300 });
	opcionesDeMenu[3]->setPosition({ 340,350 });
}
void Menu::gameLoop()
{
	while (MenuIncio->isOpen())
	{
		Dibujar();
		Eventos();
	}
}

void Menu::Dibujar()
{
	MenuIncio->clear();
	for (int i = 0; i < 4; i++)
	{
		MenuIncio->draw(*opcionesDeMenu[i]);
	}
	MenuIncio->display();
}

void Menu::Eventos() {
	while (MenuIncio->pollEvent(*evento1)) {
		switch (evento1->type)
		{
		case Event::Closed:
			MenuIncio->close();
			exit(0);
			break;
		case Event::MouseButtonPressed:
			if (Mouse::isButtonPressed(Mouse::Left)) {
				if (Vector2f(Mouse::getPosition()) == (opcionesDeMenu[0]->getPosition())) {
					Nivel1* N1;
					N1 = new Nivel1(800, 600, " Menu ");
					cout << "AHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH"<<endl;
				}

			}
		}

	}
}



