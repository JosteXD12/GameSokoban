#include "Nivel1.h" 

Nivel1::Nivel1(int resolX, int resolY, string titulo)
{

    VentNivel1 = new RenderWindow(VideoMode(resolX, resolY), titulo);
    VentNivel1->setFramerateLimit(120);

    textura1 = new Texture;
    sprite1 = new Sprite;
    textura1->loadFromFile("Imagenes/3.png");
    sprite1->setTexture(*textura1);

    muro1 = setRectangulo(32, 128, 200, 200);
    evento = new Event;
    Gameloop();
}

void Nivel1::Gameloop() {
    while (VentNivel1->isOpen())
    {
        Dibujar();
        Eventos();
    }
}

void Nivel1::Dibujar()
{
    VentNivel1->clear();
    VentNivel1->draw(*sprite1);
    VentNivel1->draw(muro1); // el muro que es un rectangulo 
    VentNivel1->display();
}

void Nivel1::Eventos() {
    while (VentNivel1->pollEvent(*evento)) {
        switch (evento->type)
        {
        case Event::Closed:
            VentNivel1->close();
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
bool Nivel1::Colisiones() {
    if (sprite1->getGlobalBounds().intersects(muro1.getGlobalBounds())) { return true; } //colosion pj con rectangulo 
}