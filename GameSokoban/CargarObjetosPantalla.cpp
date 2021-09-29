#include "main.h"

void juego::objetosPantalla() {
    pantalla->clear();

    textura1->loadFromFile("Imagenes/3.png");
    sprite1->setTexture(*textura1); // Personaje
    sprite1->setPosition(Vector2f(128,128)); // coordenadas del personaje

    muro[0] = setRectangulo(800, 32, 0, 500); //Muro de abajo
    muro[1] = setRectangulo(800, 32, 0, 0); //Muro de arriba
    muro[2] = setRectangulo(32, 468, 0, 32); //Muro de izquierda
    muro[3] = setRectangulo(32, 468, 768, 32); //Muro de derecha

    boton[0] = setRectangulo(128, 32, 350, 250); //Boton Jugar
    boton[1] = setRectangulo(128, 32, 350, 350); //Boton acerca de *Falta funcionalidad
    boton[2]= setRectangulo(128, 32, 668, 564); //Boton para volver al menu
}