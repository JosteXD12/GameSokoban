#include "main.h"

void juego::objetosMenu() {

    boton[0] = setRectangulo(128, 32, 350, 250); //Boton Jugar
    boton[1] = setRectangulo(128, 32, 350, 350); //Boton acerca de *Falta funcionalidad

    textura[9]->loadFromFile("Imagenes/menu.jpg");
    fondo[0].setTexture(*textura[9]);
    fondo[0].setPosition(Vector2f(0, 0));
}


void juego::objetosNivel1() {

    textura[0]->loadFromFile("Imagenes/pj_64.png");
    sprite1->setTexture(*textura[0]); // Personaje

    sprite1->setPosition(Vector2f(128, 128)); // coordenadas del personaje

    textura[5]->loadFromFile("Imagenes/background.png");
    fondo[1].setTexture(*textura[5]);
    fondo[1].setPosition(Vector2f(0, 0));

    // =============== Muros Horizontales ====================

    muro[0] = setRectangulo(768, 32, 16, 480); //Muro de abajo
    muro[1] = setRectangulo(768, 32, 16, 64); //Muro de arriba

    textura[6]->loadFromFile("Imagenes/muro1.png");
    muro[0].setTexture(textura[6]);
    muro[1].setTexture(textura[6]);

    // ============== Muros verticales =========================
    muro[2] = setRectangulo(32, 384, 16, 96); //Muro de izquierda
    muro[3] = setRectangulo(32, 384, 752, 96); //Muro de derecha

    textura[8]->loadFromFile("Imagenes/muro2.jpg");
    muro[2].setTexture(textura[8]);
    muro[3].setTexture(textura[8]);


    // ============= Caja ==============================
    muro[4] = setRectangulo(64, 64, 240, 240); // La caja


    // ============= Boton para volver al menu ===========
    boton[2] = setRectangulo(128, 32, 576, 548); 

    // =========== Meta ======================
    meta = setRectangulo(64, 64, 688, 416);

    textura[7]->loadFromFile("Imagenes/meta.png");
    meta.setTexture(textura[7]);
}