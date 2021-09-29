#include "main.h"

void juego::objetosPantalla() {
    pantalla->clear();

    textura1->loadFromFile("Imagenes/3.png");
    sprite1->setTexture(*textura1); // Personaje
    sprite1->setPosition(Vector2f(128,128)); // coordenadas del personaje

    muro[0] = setRectangulo(640, 32, 64, 476); //Muro de abajo
    muro[1] = setRectangulo(640, 32, 64, 64); //Muro de arriba
    muro[2] = setRectangulo(32, 380, 64, 96); //Muro de izquierda
    muro[3] = setRectangulo(32, 380, 672, 96); //Muro de derecha

    muro[4] = setRectangulo(64, 64, 240, 240); // La caja

    boton[0] = setRectangulo(128, 32, 350, 250); //Boton Jugar
    boton[1] = setRectangulo(128, 32, 350, 350); //Boton acerca de *Falta funcionalidad
    boton[2]= setRectangulo(128, 32, 576, 548); //Boton para volver al menu
}