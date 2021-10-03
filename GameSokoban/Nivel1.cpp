#include "main.h" 


void juego::DibujarNivel1()
{
    pantalla->clear();
    pantalla->draw(fondo[1]);
    pantalla->draw(*sprite1);
    pantalla->draw(muro[0]); // el muro de abajo
    pantalla->draw(muro[1]); // el muro de arriba
    pantalla->draw(muro[2]); // el muro de izquierda
    pantalla->draw(muro[3]); // el muro de derecha
    pantalla->draw(meta);

    pantalla->draw(muro[4]); // Caja

    pantalla->draw(boton[2]);
    pantalla->display();
}
