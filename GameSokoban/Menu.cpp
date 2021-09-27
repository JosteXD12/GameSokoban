#include "Menu.h"

Menu::Menu(int resolX, int resolY, string titulo)
{
	MenuInicial = new RenderWindow(VideoMode(resolX, resolY), titulo);
	MenuInicial->setFramerateLimit(120);

	Evento = new Event;
	Gameloop();
}
void Menu::Gameloop()
{
	while (MenuInicial->isOpen())
	{
		Dibujar();
		Eventos();
	}
}

void Menu::Dibujar()
{
	MenuInicial->clear();
	MenuInicial->display();
}
void Menu::Eventos() {
	while (MenuInicial->pollEvent(*Evento)) {
		switch (Evento->type)
		{
		case Event::Closed:
			MenuInicial->close();
			exit(0);
			break;
		}

	}
}