#include "main.h" 


void juego::DibujarMenu()
{
    pantalla->clear();
    pantalla->draw(fondo[0]);
    pantalla->draw(boton[0]); // boton Jugar
    pantalla->draw(boton[1]); // Boton Acerca de
    pantalla->draw(boton[7]); // cargar
    pantalla->draw(*textoBtn[0]);
    pantalla->draw(*textoBtn[1]);
    pantalla->draw(*textoBtn[7]);

    pantalla->display();
}

void juego::DibujarAcercaDe() {
    pantalla->clear();
    pantalla->draw(fondo[2]);
    pantalla->draw(boton[2]);
    pantalla->draw(*textoBtn[2]);
    pantalla->draw(boton[5]);
    pantalla->draw(*textoBtn[5]);
    pantalla->display();
}
void juego::DibujarAcercaDe2() {
    pantalla->clear();
    pantalla->draw(fondo[3]);
    pantalla->draw(boton[2]);
    pantalla->draw(*textoBtn[2]);
    pantalla->display();
}