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

    sprite1->setPosition(Vector2f(96, 144)); // coordenadas del personaje


    // =================== fondo ==========================

    textura[5]->loadFromFile("Imagenes/background.png");
    fondo[1].setTexture(*textura[5]);
    fondo[1].setPosition(Vector2f(0, 0));

    // =============== Muros Horizontales ====================

    muro[0] = setRectangulo(768, 32, 16, 496); //Muro de abajo
    muro[1] = setRectangulo(768, 32, 16, 80); //Muro de arriba

    textura[6]->loadFromFile("Imagenes/muro1.png");
    muro[0].setTexture(textura[6]);
    muro[1].setTexture(textura[6]);

    // ============== Muros verticales =========================
    muro[2] = setRectangulo(32, 384, 16, 112); //Muro de izquierda
    muro[3] = setRectangulo(32, 384, 752, 112); //Muro de derecha

    textura[8]->loadFromFile("Imagenes/muro2.jpg");
    muro[2].setTexture(textura[8]);
    muro[3].setTexture(textura[8]);

    //============== Muros interiores =================
    muro[4] = setRectangulo(64, 64, 256, 112);
    muro[5] = setRectangulo(64, 64, 256, 176);
    muro[6] = setRectangulo(64, 64, 256, 240);
    muro[7] = setRectangulo(64, 64, 508, 368);
    muro[8] = setRectangulo(64, 64, 508, 304);

    textura[10]->loadFromFile("Imagenes/muro_2.png");
    muro[4].setTexture(textura[10]);
    muro[5].setTexture(textura[10]);
    muro[6].setTexture(textura[10]);
    textura[11]->loadFromFile("Imagenes/muro_3.png");
    muro[7].setTexture(textura[11]);
    muro[8].setTexture(textura[11]);

    // ============= Caja ==============================
    caja[0] = setRectangulo(64, 64, 160, 176); // La caja


    // ============= Boton para volver al menu ===========
    boton[2] = setRectangulo(128, 32, 576, 548); 

    // =========== Meta ======================
    meta = setRectangulo(64, 64, 688, 432);

    textura[7]->loadFromFile("Imagenes/meta.png");
    meta.setTexture(textura[7]);

    // ========== puntos ======================
    puntos[0]= setRectangulo(64, 64, 128, 8);
}