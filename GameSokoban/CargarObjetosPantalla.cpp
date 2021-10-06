#include "main.h"

void juego::objetosMenu() {
    fuente->loadFromFile("Imagenes/arial.ttf");
    textoBtn[0] = new Text("Jugar", *fuente, 24);
    textoBtn[0]->setFillColor(Color(52, 91, 99));

    textoBtn[1] = new Text("Informacion", *fuente, 20);
    textoBtn[1]->setFillColor(Color(52, 91, 99));

    textoBtn[2] = new Text("Menu", *fuente, 24);
    textoBtn[2]->setFillColor(Color(52, 91, 99));

    textoBtn[3] = new Text("Reiniciar", *fuente, 24);
    textoBtn[3]->setFillColor(Color(52, 91, 99));

    textoBtn[4] = new Text("Avanzar", *fuente, 24);
    textoBtn[4]->setFillColor(Color(52, 91, 99));

    textoBtn[5] = new Text("Acerca de", *fuente, 20);
    textoBtn[5]->setFillColor(Color(52, 91, 99));

    textoBtn[6] = new Text("Guardar", *fuente, 24);
    textoBtn[6]->setFillColor(Color(52, 91, 99));

    textoBtn[7] = new Text("Cargar", *fuente, 24);
    textoBtn[7]->setFillColor(Color(52, 91, 99));

    textura[9]->loadFromFile("Imagenes/menu.jpg");
    fondo[0].setTexture(*textura[9]);
    fondo[0].setPosition(Vector2f(0, 0));

    // =================== fondo ==========================

    textura[5]->loadFromFile("Imagenes/background.png");
    fondo[1].setTexture(*textura[5]);
    fondo[1].setPosition(Vector2f(0, 0));

    textura[13]->loadFromFile("Imagenes/instrucciones.jpg");
    fondo[2].setTexture(*textura[13]);
    fondo[2].setPosition(Vector2f(0, 0));

    textura[14]->loadFromFile("Imagenes/informacion.jpg");
    fondo[3].setTexture(*textura[14]);
    fondo[3].setPosition(Vector2f(0, 0));

    textura[16]->loadFromFile("Imagenes/final.jpg");
    fondo[4].setTexture(*textura[16]);
    fondo[4].setPosition(Vector2f(0, 0));

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

    // ============= Botones ===========
    boton[0] = setRectangulo(128, 32, 350, 250); //Boton Jugar
    boton[0].setFillColor(Color(165, 225, 173));
    boton[0].setOutlineColor(Color(100,175,99));
    boton[0].setOutlineThickness(4);

    boton[1] = setRectangulo(128, 32, 350, 350); //Boton acerca de/informacion
    boton[1].setFillColor(Color(165, 225, 173));
    boton[1].setOutlineColor(Color(100, 175, 99));
    boton[1].setOutlineThickness(4);

    boton[2] = setRectangulo(128, 32, 32, 548); // volver
    boton[2].setFillColor(Color(165, 225, 173));
    boton[2].setOutlineColor(Color(100, 175, 99));
    boton[2].setOutlineThickness(4);

    boton[3] = setRectangulo(128, 32, 224, 548);// reiniciar
    boton[3].setFillColor(Color(165, 225, 173));
    boton[3].setOutlineColor(Color(100, 175, 99));
    boton[3].setOutlineThickness(4);

    boton[4] = setRectangulo(128, 32, 656, 548); // avanzar
    boton[4].setFillColor(Color(165, 225, 173));
    boton[4].setOutlineColor(Color(100, 175, 99));
    boton[4].setOutlineThickness(4);

    boton[5] = setRectangulo(128, 32, 528, 548);
    boton[5].setFillColor(Color(165, 225, 173));
    boton[5].setOutlineColor(Color(100, 175, 99));
    boton[5].setOutlineThickness(4);

    boton[6] = setRectangulo(128, 32, 656, 8); // guardado
    boton[6].setFillColor(Color(165, 225, 173));
    boton[6].setOutlineColor(Color(100, 175, 99));
    boton[6].setOutlineThickness(4);

    boton[7] = setRectangulo(128, 32, 350, 450); 
    boton[7].setFillColor(Color(165, 225, 173));
    boton[7].setOutlineColor(Color(100, 175, 99));
    boton[7].setOutlineThickness(4);

    // ========== puntos ======================
    puntos[0] = setRectangulo(64, 64, 128, 8);
    puntos[1] = setRectangulo(64, 64, 224, 8);
    puntos[2] = setRectangulo(64, 64, 320, 8);

    puntos[0].setFillColor(Color::Transparent);
    puntos[1].setFillColor(Color::Transparent);
    puntos[2].setFillColor(Color::Transparent);

    //=========== textos ====================
    textoBtn[0]->setPosition(382,250);
    textoBtn[1]->setPosition(360,354);
    textoBtn[2]->setPosition(64, 548);
    textoBtn[3]->setPosition(240, 548);
    textoBtn[4]->setPosition(676, 548);
    textoBtn[5]->setPosition(548, 548);
    textoBtn[6]->setPosition(672, 8);
    textoBtn[7]->setPosition(374, 450);
}


void juego::objetosNivel1() {

    textura[0]->loadFromFile("Imagenes/pj_64.png");
    sprite1->setTexture(*textura[0]); // Personaje

    sprite1->setPosition(Vector2f(96, 144)); // coordenadas del personaje


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
    textura[15]->loadFromFile("Imagenes/cofre.png");
    caja[0] = setRectangulo(64, 64, 160, 176); // La caja
    caja[0].setTexture(textura[15]);



    // =========== Meta ======================
    meta = setRectangulo(64, 64, 688, 432);

    textura[7]->loadFromFile("Imagenes/meta.png");
    meta.setTexture(textura[7]);
}

void juego::objetosNivel2() {
    textura[0]->loadFromFile("Imagenes/pj_64.png");
    sprite1->setTexture(*textura[0]); // Personaje

    sprite1->setPosition(Vector2f(96, 144)); // coordenadas del personaje


    //============== Muros interiores =================
    muro[4] = setRectangulo(64, 64, 256, 112);
    muro[5] = setRectangulo(64, 64, 256, 176);
    muro[6] = setRectangulo(64, 64, 256, 240);
    muro[7] = setRectangulo(64, 64, 332, 432);
    muro[8] = setRectangulo(64, 64, 332, 368);

    muro[9] = setRectangulo(64, 64, 496, 336);
    muro[10] = setRectangulo(64, 64, 496, 272);
    muro[11] = setRectangulo(64, 64, 560, 272);
    muro[12] = setRectangulo(64, 64, 560, 336);


    textura[10]->loadFromFile("Imagenes/muro_2.png");
    muro[4].setTexture(textura[10]);
    muro[6].setTexture(textura[10]);
    muro[9].setTexture(textura[10]);
    textura[11]->loadFromFile("Imagenes/muro_3.png");
    muro[5].setTexture(textura[11]);
    muro[8].setTexture(textura[11]);
    muro[11].setTexture(textura[11]);
    textura[12]->loadFromFile("Imagenes/muro_1_0.png");
    muro[10].setTexture(textura[12]);
    muro[12].setTexture(textura[12]);
    muro[7].setTexture(textura[12]);


    // ============= Caja ==============================
    textura[15]->loadFromFile("Imagenes/cofre.png");
    caja[0] = setRectangulo(64, 64, 160, 176); // La caja
    caja[0].setTexture(textura[15]);

    // =========== Meta ======================
    meta = setRectangulo(64, 64, 688, 304);

    textura[7]->loadFromFile("Imagenes/meta.png");
    meta.setTexture(textura[7]);

}

void juego::objetosNivel3() {
    textura[0]->loadFromFile("Imagenes/pj_64.png");
    sprite1->setTexture(*textura[0]); // Personaje

    sprite1->setPosition(Vector2f(192, 432)); // coordenadas del personaje

    //============== Muros interiores =================
    muro[4] = setRectangulo(64, 64, 688, 304);
    muro[5] = setRectangulo(64, 64, 320, 176);
    muro[6] = setRectangulo(64, 64, 48, 240);
    muro[7] = setRectangulo(64, 64, 112, 240);
    muro[8] = setRectangulo(64, 64, 624, 240);

    muro[9] = setRectangulo(64, 64, 320, 432);
    muro[10] = setRectangulo(64, 64, 320, 368);
    muro[11] = setRectangulo(64, 64, 384, 432);
    muro[12] = setRectangulo(64, 64, 384, 368);


    textura[10]->loadFromFile("Imagenes/muro_2.png");
    muro[4].setTexture(textura[10]);
    muro[6].setTexture(textura[10]);
    muro[9].setTexture(textura[10]);
    textura[11]->loadFromFile("Imagenes/muro_3.png");
    muro[5].setTexture(textura[11]);
    muro[8].setTexture(textura[11]);
    muro[11].setTexture(textura[11]);
    textura[12]->loadFromFile("Imagenes/muro_1_0.png");
    muro[10].setTexture(textura[12]);
    muro[12].setTexture(textura[12]);
    muro[7].setTexture(textura[12]);


    // ============= Caja ==============================
    caja[0] = setRectangulo(64, 64, 112, 176); // La caja
    caja[1] = setRectangulo(64, 64, 624, 368);
    textura[15]->loadFromFile("Imagenes/cofre.png");
    caja[0].setTexture(textura[15]);
    caja[1].setTexture(textura[15]);
    // =========== Meta ======================
    meta = setRectangulo(64, 64, 320, 112);

    textura[7]->loadFromFile("Imagenes/meta.png");
    meta.setTexture(textura[7]);
}

void juego::objetosNivel4() {
    textura[0]->loadFromFile("Imagenes/pj_64.png");
    sprite1->setTexture(*textura[0]); // Personaje

    sprite1->setPosition(Vector2f(336, 128)); // coordenadas del personaje

    //============== Muros interiores =================
    muro[4] = setRectangulo(64, 64, 560, 176);
    muro[5] = setRectangulo(64, 64, 176, 240);
    muro[6] = setRectangulo(64, 64, 432, 112);
    muro[7] = setRectangulo(64, 64, 240, 240);
    muro[8] = setRectangulo(64, 64, 624, 304);

    muro[9] = setRectangulo(64, 64, 368, 368);
    muro[10] = setRectangulo(64, 64, 432, 368);
    muro[11] = setRectangulo(64, 64, 496, 432);
    muro[12] = setRectangulo(64, 64, 496, 368);

    muro[13] = setRectangulo(64, 64, 240, 112);
    muro[14] = setRectangulo(64, 64, 240, 176);


    textura[10]->loadFromFile("Imagenes/muro_2.png");
    muro[4].setTexture(textura[10]);
    muro[6].setTexture(textura[10]);
    muro[9].setTexture(textura[10]);
    muro[13].setTexture(textura[10]);
    textura[11]->loadFromFile("Imagenes/muro_3.png");
    muro[5].setTexture(textura[11]);
    muro[8].setTexture(textura[11]);
    muro[11].setTexture(textura[11]);
    textura[12]->loadFromFile("Imagenes/muro_1_0.png");
    muro[10].setTexture(textura[12]);
    muro[12].setTexture(textura[12]);
    muro[7].setTexture(textura[12]);
    muro[14].setTexture(textura[12]);


    // ============= Caja ==============================
    caja[0] = setRectangulo(64, 64, 432, 240); // La caja
    caja[1] = setRectangulo(64, 64, 624, 368);
    caja[2] = setRectangulo(64, 64, 112, 176);
    textura[15]->loadFromFile("Imagenes/cofre.png");
    caja[0].setTexture(textura[15]);
    caja[1].setTexture(textura[15]);
    caja[2].setTexture(textura[15]);


    // =========== Meta ======================
    meta = setRectangulo(64, 64, 432, 432);

    textura[7]->loadFromFile("Imagenes/meta.png");
    meta.setTexture(textura[7]);

}

void juego::objetosNivel5() {
    textura[0]->loadFromFile("Imagenes/pj_64.png");
    sprite1->setTexture(*textura[0]); // Personaje

    sprite1->setPosition(Vector2f(688, 112)); // coordenadas del personaje

    //============== Muros interiores =================
    muro[4] = setRectangulo(64, 64, 624, 176);
    muro[5] = setRectangulo(64, 64, 240, 240);
    muro[6] = setRectangulo(64, 64, 560, 176);
    muro[7] = setRectangulo(64, 64, 176, 240);
    muro[8] = setRectangulo(64, 64, 688, 176);

    muro[9] = setRectangulo(64, 64, 368, 368);
    muro[10] = setRectangulo(64, 64, 368, 432);
    muro[11] = setRectangulo(64, 64, 432, 304);
    muro[12] = setRectangulo(64, 64, 368, 304);

    muro[13] = setRectangulo(64, 64, 112, 240);
    muro[14] = setRectangulo(64, 64, 48, 240);


    textura[10]->loadFromFile("Imagenes/muro_2.png");
    muro[4].setTexture(textura[10]);
    muro[6].setTexture(textura[10]);
    muro[9].setTexture(textura[10]);
    muro[13].setTexture(textura[10]);
    textura[11]->loadFromFile("Imagenes/muro_3.png");
    muro[5].setTexture(textura[11]);
    muro[8].setTexture(textura[11]);
    muro[11].setTexture(textura[11]);
    textura[12]->loadFromFile("Imagenes/muro_1_0.png");
    muro[10].setTexture(textura[12]);
    muro[12].setTexture(textura[12]);
    muro[7].setTexture(textura[12]);
    muro[14].setTexture(textura[12]);


    // ============= Caja ==============================
    caja[0] = setRectangulo(64, 64, 238, 176); // La caja
    caja[1] = setRectangulo(64, 64, 624, 368);
    caja[2] = setRectangulo(64, 64, 112, 368);
    textura[15]->loadFromFile("Imagenes/cofre.png");
    caja[0].setTexture(textura[15]);
    caja[1].setTexture(textura[15]);
    caja[2].setTexture(textura[15]);


    // =========== Meta ======================
    meta = setRectangulo(64, 64, 432, 240);

    textura[7]->loadFromFile("Imagenes/meta.png");
    meta.setTexture(textura[7]);
}
