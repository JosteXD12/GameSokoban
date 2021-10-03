#include "main.h" 
juego::juego(int resolX, int resolY, string titulo)
{
    pantalla = new RenderWindow(VideoMode(resolX, resolY), titulo);
    evento = new Event;
    sprite1 = new Sprite;
    for (int i = 0; i < 10; i++) {
        textura[i] = new Texture;
    }
    objetosMenu();
    objetosNivel1();
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