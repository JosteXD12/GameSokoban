#include "main.h"

void juego::objetosMenu() {

    boton[0] = setRectangulo(128, 32, 350, 250); //Boton Jugar
    boton[1] = setRectangulo(128, 32, 350, 350); //Boton acerca de *Falta funcionalidad
}
void juego::objetosNivel1() {
    textura[0].loadFromFile("Imagenes/pj_64.png");
    sprite1->setTexture(textura[0]); // Personaje
    sprite1->setPosition(Vector2f(128, 128)); // coordenadas del personaje


    muro[0] = setRectangulo(768, 32, 16, 476); //Muro de abajo
    muro[1] = setRectangulo(768, 32, 16, 64); //Muro de arriba
    muro[2] = setRectangulo(32, 380, 16, 96); //Muro de izquierda
    muro[3] = setRectangulo(32, 380, 752, 96); //Muro de derecha

    muro[4] = setRectangulo(64, 64, 240, 240); // La caja

    textura[5].loadFromFile("Imagenes/background.png");
    fondo[1].setTexture(textura[5]);
    fondo[1].setPosition(Vector2f(0, 0));

    boton[2] = setRectangulo(128, 32, 576, 548); //Boton para volver al menu
}