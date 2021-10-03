#include "main.h" 


void juego::DibujarMenu()
{
    pantalla->clear();
    pantalla->draw(fondo[0]);
    pantalla->draw(boton[0]); // boton Jugar
    pantalla->draw(boton[1]); // Boton Acerca de
    pantalla->display();
}