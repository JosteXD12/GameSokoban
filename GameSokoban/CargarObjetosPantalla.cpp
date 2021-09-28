#include "main.h"

void juego::objetosPantalla() {
    pantalla->clear();
    textura1 = new Texture;
    sprite1 = new Sprite;
    textura1->loadFromFile("Imagenes/3.png");
    sprite1->setTexture(*textura1);
    muro[0] = setRectangulo(32, 128, 200, 200);
}