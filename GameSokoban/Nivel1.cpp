#include "main.h" 


void juego::DibujarNivel1()
{
    pantalla->clear();
    pantalla->draw(*sprite1);
    pantalla->draw(muro[0]); // el muro que es un rectangulo 
    pantalla->display();
}
