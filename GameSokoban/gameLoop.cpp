#include "main.h" 
juego::juego(int resolX, int resolY, string titulo)
{
    pantalla = new RenderWindow(VideoMode(resolX, resolY), titulo);
    evento = new Event;
    sprite1 = new Sprite;
    fuente = new Font;
    for (int i = 0; i < 15; i++) {
        textura[i] = new Texture;
    }
    contarPuntos.push(0);
    objetosMenu();
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
        if (pantallaActual == 2) {
            DibujarNivel2();
        }
        if (pantallaActual == 3) {
            DibujarNivel3();
        }
        if (pantallaActual == 4) {
            DibujarNivel4();
        }
        if (pantallaActual == 5) {
            DibujarNivel5();
        }
        if (pantallaActual == 6) {
                                    // falta
        }
        if (pantallaActual == 7) {
            DibujarAcercaDe();
        }
        if (pantallaActual == 8) {
            DibujarAcercaDe2();
        }
        Eventos();
    }
}