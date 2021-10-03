#include "main.h" 
void juego::Eventos() {
    while (pantalla->pollEvent(*evento)) {
        switch (evento->type)
        {
        case Event::Closed:
            pantalla->close();
            exit(0);
            break;
        case Event::KeyPressed:
            //derecha 
            if ( evento->key.code == Keyboard::Right) {
                if (derecha == 1) { derecha = 2; }
                else if (derecha == 2) { derecha = 1; }
                if (Colisiones() != true&& Colisiones() != true && ColisionesCajaPared() != true) {
                    sprite1->setPosition(sprite1->getPosition().x + 16, sprite1->getPosition().y);
                }
                if (Colisiones() == true) {
                    sprite1->setPosition(sprite1->getPosition().x - 16, sprite1->getPosition().y);
                }
                if (ColisionesCajaJugador() == true) {
                    sprite1->setPosition(sprite1->getPosition().x - 16, sprite1->getPosition().y);
                    muro[4].setPosition(muro[4].getPosition().x + 16, muro[4].getPosition().y);
                }
                if (ColisionesCajaPared() == true) {
                    muro[4].setPosition(muro[4].getPosition().x - 16, muro[4].getPosition().y);
                }
                if (derecha == 1) {
                    textura[1]->loadFromFile("Imagenes/pj_64_d.png");
                    sprite1->setTexture(*textura[1]);
                }
                if (derecha == 2) {
                    textura[1]->loadFromFile("Imagenes/pj_64_d_2.png");
                    sprite1->setTexture(*textura[1]);
                }
            }
            //izquierda 
            if (evento->key.code == Keyboard::Left) {
                if (izquierda == 1) { izquierda = 2; }
                else if (izquierda == 2) { izquierda = 1; }

                if (izquierda == 1) {
                    textura[2]->loadFromFile("Imagenes/pj_64_i.png");
                    sprite1->setTexture(*textura[2]);
                }
                if (izquierda == 2) {
                    textura[2]->loadFromFile("Imagenes/pj_64_i_2.png");
                    sprite1->setTexture(*textura[2]);
                }

                if (Colisiones() != true&& Colisiones() != true && ColisionesCajaPared() != true) {
                    sprite1->setPosition(sprite1->getPosition().x - 16, sprite1->getPosition().y);
                }
                if (Colisiones() == true) {
                    sprite1->setPosition(sprite1->getPosition().x + 16, sprite1->getPosition().y);
                }
                if (ColisionesCajaJugador() == true) {
                    sprite1->setPosition(sprite1->getPosition().x + 16, sprite1->getPosition().y);
                    muro[4].setPosition(muro[4].getPosition().x - 16, muro[4].getPosition().y);
                }
                if (ColisionesCajaPared() == true) {
                    muro[4].setPosition(muro[4].getPosition().x + 16, muro[4].getPosition().y);
                }
            }
            //bjaar 
            if ( evento->key.code == Keyboard::Down) {
                if (abajo == 1) { abajo = 2; }
                else if (abajo == 2) { abajo = 1; }

                if (abajo == 1) {
                    textura[3]->loadFromFile("Imagenes/pj_64.png");
                    sprite1->setTexture(*textura[3]);
                }
                if (abajo == 2) {
                    textura[3]->loadFromFile("Imagenes/pj_64_2.png");
                    sprite1->setTexture(*textura[3]);
                }

                //======= Zona del movimiento =================
                if (Colisiones() != true&&Colisiones() != true && ColisionesCajaPared() != true) {
                    sprite1->setPosition(sprite1->getPosition().x, sprite1->getPosition().y + 16);
                    
                }
                if (Colisiones() == true) {
                    sprite1->setPosition(sprite1->getPosition().x, sprite1->getPosition().y - 16);
                }
                if (ColisionesCajaJugador() == true) {
                    sprite1->setPosition(sprite1->getPosition().x, sprite1->getPosition().y-16);
                    muro[4].setPosition(muro[4].getPosition().x, muro[4].getPosition().y+16);
                }
                if (ColisionesCajaPared() == true) {
                    muro[4].setPosition(muro[4].getPosition().x, muro[4].getPosition().y-16);
                }
            }
            // subir 
            if ( evento->key.code == Keyboard::Up) {
                // ======= Zona del sprite ============
                if (arriba == 1) { arriba = 2; }
                else if (arriba == 2) { arriba = 1; }

                if (arriba == 1) {
                    textura[4]->loadFromFile("Imagenes/pj_64_e_2.png");
                    sprite1->setTexture(*textura[4]);
                }
                if (arriba == 2) {
                    textura[4]->loadFromFile("Imagenes/pj_64_e.png");
                    sprite1->setTexture(*textura[4]);
                }    
                
                // ======= Zona del movimiento  =========
                if (Colisiones() != true&&ColisionesCajaPared()!=true) {
                    sprite1->setPosition(sprite1->getPosition().x, sprite1->getPosition().y - 16);
                }
                if (Colisiones() == true) {
                    sprite1->setPosition(sprite1->getPosition().x, sprite1->getPosition().y + 16);
                }
                if (ColisionesCajaJugador() == true) {
                    sprite1->setPosition(sprite1->getPosition().x , sprite1->getPosition().y+16);
                    muro[4].setPosition(muro[4].getPosition().x, muro[4].getPosition().y-16);
                }
                if (ColisionesCajaPared() == true) {
                    muro[4].setPosition(muro[4].getPosition().x, muro[4].getPosition().y+16);
                }


            }
        case Event::MouseButtonPressed:
            if (evento->mouseButton.button == Mouse::Left) {
                if (ColisionMouse() == 1) {
                    objetosNivel1();
                    pantallaActual = 1;
                }
                if (ColisionMouse() == 2) {
                    pantallaActual = 0;

                }
            }
        }


    }
}
bool juego::Colisiones() {
    if (sprite1->getGlobalBounds().intersects(muro[0].getGlobalBounds())) { return true; } 
    if (sprite1->getGlobalBounds().intersects(muro[1].getGlobalBounds())) { return true; }
    if (sprite1->getGlobalBounds().intersects(muro[2].getGlobalBounds())) { return true; }
    if (sprite1->getGlobalBounds().intersects(muro[3].getGlobalBounds())) { return true; }
}
bool juego::ColisionesCajaJugador() {
    if (sprite1->getGlobalBounds().intersects(muro[4].getGlobalBounds())) { return true; }
}
bool juego::ColisionesCajaPared() {
    if (muro[4].getGlobalBounds().intersects(muro[0].getGlobalBounds())) { return true; } 
    if (muro[4].getGlobalBounds().intersects(muro[1].getGlobalBounds())) { return true; }
    if (muro[4].getGlobalBounds().intersects(muro[2].getGlobalBounds())) { return true; }
    if (muro[4].getGlobalBounds().intersects(muro[3].getGlobalBounds())) { return true; }
}

int juego::ColisionMouse() {
    Vector2i posicionMouse = Mouse::getPosition(*pantalla);
    posicionMouse = (Vector2i)pantalla->mapPixelToCoords(posicionMouse);
    FloatRect hitboxMouse=Rect<float>::Rect(posicionMouse.x, posicionMouse.y,1,1);
    // En lugar de muro[0], agrega un nuevo muro en menu para el boton y lo pones aqui.
    if (boton[0].getGlobalBounds().intersects(hitboxMouse)) {
        return 1;  // te envia al nivel 1
    }

    if (boton[2].getGlobalBounds().intersects(hitboxMouse)) {
        return 2; // te envia al menu
    }

}