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
            if (evento->key.code == Keyboard().D || evento->key.code == Keyboard().Right) {
                if (Colisiones() != true) {
                    sprite1->setPosition(sprite1->getPosition().x + 16, sprite1->getPosition().y);
                }
                if (Colisiones() == true) {
                    sprite1->setPosition(sprite1->getPosition().x - 16, sprite1->getPosition().y);
                }
            }
            //izquierda 
            if (evento->key.code == Keyboard().A || evento->key.code == Keyboard().Left) {
                if (Colisiones() != true) {
                    sprite1->setPosition(sprite1->getPosition().x - 16, sprite1->getPosition().y);
                }
                if (Colisiones() == true) {
                    sprite1->setPosition(sprite1->getPosition().x + 16, sprite1->getPosition().y);
                }
            }
            //bjaar 
            if (evento->key.code == Keyboard().S || evento->key.code == Keyboard().Down) {
                if (Colisiones() != true) {
                    sprite1->setPosition(sprite1->getPosition().x, sprite1->getPosition().y + 16);
                    
                }
                if (Colisiones() == true) {
                    sprite1->setPosition(sprite1->getPosition().x, sprite1->getPosition().y - 16);
                }
            }
            // subir 
            if (evento->key.code == Keyboard().W || evento->key.code == Keyboard().Up) {
                if (Colisiones() != true) {
                    sprite1->setPosition(sprite1->getPosition().x, sprite1->getPosition().y - 16);
                }
                if (Colisiones() == true) {
                    sprite1->setPosition(sprite1->getPosition().x, sprite1->getPosition().y + 16);
                }

            }
        case Event::MouseButtonPressed:
            if (ColisionMouse() == 1) {
                pantallaActual = 1;
            }
            if (ColisionMouse() == 2) {
                pantallaActual = 0;
            }
        }


    }
}
bool juego::Colisiones() {
    if (sprite1->getGlobalBounds().intersects(muro[0].getGlobalBounds())) { return true; } //colosion pj con rectangulo 
    if (sprite1->getGlobalBounds().intersects(muro[1].getGlobalBounds())) { return true; }
    if (sprite1->getGlobalBounds().intersects(muro[2].getGlobalBounds())) { return true; }
    if (sprite1->getGlobalBounds().intersects(muro[3].getGlobalBounds())) { return true; }
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