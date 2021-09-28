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

        }

    }
}
bool juego::Colisiones() {
    if (sprite1->getGlobalBounds().intersects(muro[0].getGlobalBounds())) { return true; } //colosion pj con rectangulo 
}