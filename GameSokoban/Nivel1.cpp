#include "main.h" 


void juego::DibujarNivel1()
{
    pantalla->clear();
    pantalla->draw(*sprite1);

    pantalla->draw(muro[0]); // el muro de abajo
    pantalla->draw(muro[1]); // el muro de arriba
    pantalla->draw(muro[2]); // el muro de izquierda
    pantalla->draw(muro[3]); // el muro de derecha

    pantalla->draw(boton[2]);
    pantalla->display();
}
