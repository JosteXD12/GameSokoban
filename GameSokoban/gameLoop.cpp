#include "main.h" 
juego::juego(int resolX, int resolY, string titulo)
{
    pantalla = new RenderWindow(VideoMode(resolX, resolY), titulo);
    pantalla->setFramerateLimit(120);
    evento = new Event;
    textura1 = new Texture;
    sprite1 = new Sprite;

    objetosPantalla();
    Gameloop();
}

void juego::Gameloop() {
    while (pantalla->isOpen())
    {
        if (pantallaActual == 0) {
            DibujarMenu();
        }
        if (pantallaActual == 1) {
            DibujarNivel1();
        }
        Eventos();
    }
}