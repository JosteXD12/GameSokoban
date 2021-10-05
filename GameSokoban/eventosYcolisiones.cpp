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
                    caja[0].setPosition(caja[0].getPosition().x + 16, caja[0].getPosition().y);
                    ColisionCajasMeta();
                }
                if (ColisionesCajaPared() == true) {
                    caja[0].setPosition(caja[0].getPosition().x - 16, caja[0].getPosition().y);
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
                    caja[0].setPosition(caja[0].getPosition().x - 16, caja[0].getPosition().y);
                    ColisionCajasMeta();
                }
                if (ColisionesCajaPared() == true) {
                    caja[0].setPosition(caja[0].getPosition().x + 16, caja[0].getPosition().y);
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
                    caja[0].setPosition(caja[0].getPosition().x, caja[0].getPosition().y+16);
                    ColisionCajasMeta();
                }
                if (ColisionesCajaPared() == true) {
                    caja[0].setPosition(caja[0].getPosition().x, caja[0].getPosition().y-16);
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
                    caja[0].setPosition(caja[0].getPosition().x, caja[0].getPosition().y-16);
                    ColisionCajasMeta();
                }
                if (ColisionesCajaPared() == true) {
                    caja[0].setPosition(caja[0].getPosition().x, caja[0].getPosition().y+16);
                }
                
            }
        case Event::MouseButtonPressed:
            if (evento->mouseButton.button == Mouse::Left) {
                if (ColisionMouse() == 1) {
                    objetosNivel1();
                    pantallaActual = 1;
                }
                if (ColisionMouse() == 2) {
                    vaciarCola();
                    pantallaActual = 0;

                }
            }
        }


    }
    pasarNivel();
}
bool juego::Colisiones() {
    if (sprite1->getGlobalBounds().intersects(muro[0].getGlobalBounds())) { return true; } 
    if (sprite1->getGlobalBounds().intersects(muro[1].getGlobalBounds())) { return true; }
    if (sprite1->getGlobalBounds().intersects(muro[2].getGlobalBounds())) { return true; }
    if (sprite1->getGlobalBounds().intersects(muro[3].getGlobalBounds())) { return true; }
    if (sprite1->getGlobalBounds().intersects(muro[4].getGlobalBounds())) { return true; }
    if (sprite1->getGlobalBounds().intersects(muro[5].getGlobalBounds())) { return true; }
    if (sprite1->getGlobalBounds().intersects(muro[6].getGlobalBounds())) { return true; }
    if (sprite1->getGlobalBounds().intersects(muro[7].getGlobalBounds())) { return true; }
    if (sprite1->getGlobalBounds().intersects(muro[8].getGlobalBounds())) { return true; }
    if (sprite1->getGlobalBounds().intersects(muro[9].getGlobalBounds())) { return true; }
    if (sprite1->getGlobalBounds().intersects(muro[10].getGlobalBounds())) { return true; }
    if (sprite1->getGlobalBounds().intersects(muro[11].getGlobalBounds())) { return true; }
    if (sprite1->getGlobalBounds().intersects(muro[12].getGlobalBounds())) { return true; }
    if(sprite1->getGlobalBounds().intersects(meta.getGlobalBounds())) { return true; }
}
bool juego::ColisionesCajaJugador() {
    if (sprite1->getGlobalBounds().intersects(caja[0].getGlobalBounds())) { return true; }
}
bool juego::ColisionesCajaPared() {
    if (caja[0].getGlobalBounds().intersects(muro[0].getGlobalBounds())) { return true; }
    if (caja[0].getGlobalBounds().intersects(muro[1].getGlobalBounds())) { return true; }
    if (caja[0].getGlobalBounds().intersects(muro[2].getGlobalBounds())) { return true; }
    if (caja[0].getGlobalBounds().intersects(muro[3].getGlobalBounds())) { return true; }
    if (caja[0].getGlobalBounds().intersects(muro[4].getGlobalBounds())) { return true; }
    if (caja[0].getGlobalBounds().intersects(muro[5].getGlobalBounds())) { return true; }
    if (caja[0].getGlobalBounds().intersects(muro[6].getGlobalBounds())) { return true; }
    if (caja[0].getGlobalBounds().intersects(muro[7].getGlobalBounds())) { return true; }
    if (caja[0].getGlobalBounds().intersects(muro[8].getGlobalBounds())) { return true; }
    if (caja[0].getGlobalBounds().intersects(muro[9].getGlobalBounds())) { return true; }
    if (caja[0].getGlobalBounds().intersects(muro[10].getGlobalBounds())) { return true; }
    if (caja[0].getGlobalBounds().intersects(muro[11].getGlobalBounds())) { return true; }
    if (caja[0].getGlobalBounds().intersects(muro[12].getGlobalBounds())) { return true; }
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
void juego::ColisionCajasMeta() {
    if (caja[0].getGlobalBounds().intersects(meta.getGlobalBounds()) ) {
        if (contarPuntos.front() == 0) {
            caja[0].setPosition(Vector2f(128,8));
        }
        if (contarPuntos.front() == 1) {
            caja[0].setPosition(Vector2f(160, 8));
        }
        if (contarPuntos.front() == 2) {
            caja[0].setPosition(Vector2f(192, 8));
        }
    }
    if (caja[1].getGlobalBounds().intersects(meta.getGlobalBounds())) {
        if (contarPuntos.front() == 0) {
            caja[1].setPosition(Vector2f(128, 8));
        }
        if (contarPuntos.front() == 1) {
            caja[1].setPosition(Vector2f(160, 8));
        }
        if (contarPuntos.front() == 2) {
            caja[1].setPosition(Vector2f(192, 8));
        }
    }
    if (caja[2].getGlobalBounds().intersects(meta.getGlobalBounds())) {
        if (contarPuntos.front() == 0) {
            caja[2].setPosition(Vector2f(128, 8));
        }
        if (contarPuntos.front() == 1) {
            caja[2].setPosition(Vector2f(160, 8));
        }
        if (contarPuntos.front() == 2) {
            caja[2].setPosition(Vector2f(192, 8));
        }
    }
}
void juego::validarPuntos() {
    if (caja[0].getGlobalBounds().intersects(puntos[0].getGlobalBounds()) ||
        caja[1].getGlobalBounds().intersects(puntos[0].getGlobalBounds()) ||
        caja[2].getGlobalBounds().intersects(puntos[0].getGlobalBounds())) {
        llenarCola(1);
    }
    if (caja[0].getGlobalBounds().intersects(puntos[1].getGlobalBounds()) ||
        caja[1].getGlobalBounds().intersects(puntos[1].getGlobalBounds()) ||
        caja[2].getGlobalBounds().intersects(puntos[1].getGlobalBounds())) {
        llenarCola(2);
    }
    if (caja[0].getGlobalBounds().intersects(puntos[2].getGlobalBounds()) ||
        caja[1].getGlobalBounds().intersects(puntos[2].getGlobalBounds()) ||
        caja[2].getGlobalBounds().intersects(puntos[2].getGlobalBounds())) {
        llenarCola(3);
    }
}
void juego::pasarNivel() {
    validarPuntos();
    if (pantallaActual == 1) {
        if (contarPuntos.front() == 1) { vaciarCola(); objetosNivel2(); pantallaActual = 2; }
    }
    if (pantallaActual == 2) {
        if (contarPuntos.front() == 1) { vaciarCola(); objetosNivel1(); pantallaActual = 3; }
    }
    if (pantallaActual == 3) {
        if (contarPuntos.front() == 2) { vaciarCola(); objetosNivel1(); pantallaActual = 4; }
    }
    if (pantallaActual == 4) {
        if (contarPuntos.front() == 2) { vaciarCola(); objetosNivel1(); pantallaActual = 5; }
    }
    if (pantallaActual == 5) {
        if (contarPuntos.front() == 3) { vaciarCola(); objetosNivel1(); pantallaActual = 6; }
    }
}
void juego::llenarCola(int p) {
    contarPuntos.pop();
    contarPuntos.push(p);
}