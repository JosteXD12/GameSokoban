#include "main.h" 


void juego::DibujarNivel1()
{
    pantalla->clear();
    pantalla->draw(fondo[1]);
    pantalla->draw(*sprite1);
    pantalla->draw(puntos[0]); // contador de puntos
    pantalla->draw(muro[0]); // el muro de abajo
    pantalla->draw(muro[1]); // el muro de arriba
    pantalla->draw(muro[2]); // el muro de izquierda
    pantalla->draw(muro[3]); // el muro de derecha
    pantalla->draw(meta);
    pantalla->draw(muro[4]); // muro interior
    pantalla->draw(muro[5]); // muro interior
    pantalla->draw(muro[6]); // muro interior
    pantalla->draw(muro[7]); // muro interior
    pantalla->draw(muro[8]); // muro interior
    pantalla->draw(caja[0]); // Caja

    pantalla->draw(boton[2]);
    pantalla->draw(boton[3]);
    pantalla->draw(*textoBtn[2]);
    pantalla->draw(*textoBtn[3]);

    pantalla->draw(boton[6]);
    pantalla->draw(*textoBtn[6]);

    if (contarPuntos.front() == 1) {
        pantalla->draw(boton[4]);
        pantalla->draw(*textoBtn[4]);
    }
    pantalla->display();
}

void juego::DibujarNivel2() {
    pantalla->clear();
    pantalla->draw(fondo[1]);
    pantalla->draw(*sprite1);
    pantalla->draw(puntos[0]); // contador de puntos
    pantalla->draw(muro[0]); // el muro de abajo
    pantalla->draw(muro[1]); // el muro de arriba
    pantalla->draw(muro[2]); // el muro de izquierda
    pantalla->draw(muro[3]); // el muro de derecha
    pantalla->draw(meta);
    pantalla->draw(muro[4]); // muro interior
    pantalla->draw(muro[5]); // muro interior
    pantalla->draw(muro[6]); // muro interior
    pantalla->draw(muro[7]); // muro interior
    pantalla->draw(muro[8]); // muro interior
    pantalla->draw(muro[9]); // muro interior
    pantalla->draw(muro[10]); // muro interior
    pantalla->draw(muro[11]); // muro interior
    pantalla->draw(muro[12]); // muro interior

    pantalla->draw(caja[0]); // Caja

    pantalla->draw(boton[2]);
    pantalla->draw(boton[3]);
    pantalla->draw(*textoBtn[2]);
    pantalla->draw(*textoBtn[3]);
    pantalla->draw(boton[6]);
    pantalla->draw(*textoBtn[6]);
    if (contarPuntos.front() == 1) {
        pantalla->draw(boton[4]);
        pantalla->draw(*textoBtn[4]);
    }
    pantalla->display();
}

void juego::DibujarNivel3() {
    pantalla->clear();
    pantalla->draw(fondo[1]);
    pantalla->draw(*sprite1);
    pantalla->draw(puntos[0]); // contador de puntos
    pantalla->draw(puntos[1]);
    pantalla->draw(muro[0]); // el muro de abajo
    pantalla->draw(muro[1]); // el muro de arriba
    pantalla->draw(muro[2]); // el muro de izquierda
    pantalla->draw(muro[3]); // el muro de derecha
    pantalla->draw(meta);
    pantalla->draw(muro[4]); // muro interior
    pantalla->draw(muro[5]); // muro interior
    pantalla->draw(muro[6]); // muro interior
    pantalla->draw(muro[7]); // muro interior
    pantalla->draw(muro[8]); // muro interior
    pantalla->draw(muro[9]); // muro interior
    pantalla->draw(muro[10]); // muro interior
    pantalla->draw(muro[11]); // muro interior
    pantalla->draw(muro[12]); // muro interior

    pantalla->draw(caja[0]); // Caja
    pantalla->draw(caja[1]);

    pantalla->draw(boton[2]);
    pantalla->draw(boton[3]);

    pantalla->draw(*textoBtn[2]);
    pantalla->draw(*textoBtn[3]);
    pantalla->draw(boton[6]);
    pantalla->draw(*textoBtn[6]);
    if (contarPuntos.front() == 2) {
        pantalla->draw(boton[4]);
        pantalla->draw(*textoBtn[4]);
    }
    pantalla->display();
}

void juego::DibujarNivel4() {
    pantalla->clear();
    pantalla->draw(fondo[1]);
    pantalla->draw(*sprite1);
    pantalla->draw(puntos[0]); // contador de puntos
    pantalla->draw(puntos[1]);
    pantalla->draw(puntos[2]);

    pantalla->draw(muro[0]); // el muro de abajo
    pantalla->draw(muro[1]); // el muro de arriba
    pantalla->draw(muro[2]); // el muro de izquierda
    pantalla->draw(muro[3]); // el muro de derecha
    pantalla->draw(meta);
    pantalla->draw(muro[4]); // muro interior
    pantalla->draw(muro[5]); // muro interior
    pantalla->draw(muro[6]); // muro interior
    pantalla->draw(muro[7]); // muro interior
    pantalla->draw(muro[8]); // muro interior
    pantalla->draw(muro[9]); // muro interior
    pantalla->draw(muro[10]); // muro interior
    pantalla->draw(muro[11]); // muro interior
    pantalla->draw(muro[12]); // muro interior
    pantalla->draw(muro[13]); // muro interior
    pantalla->draw(muro[14]); // muro interior

    pantalla->draw(caja[0]); // Caja
    pantalla->draw(caja[1]);
    pantalla->draw(caja[2]);

    pantalla->draw(boton[2]);
    pantalla->draw(boton[3]);
    pantalla->draw(*textoBtn[2]);
    pantalla->draw(*textoBtn[3]);
    pantalla->draw(boton[6]);
    pantalla->draw(*textoBtn[6]);
    if (contarPuntos.front() == 3) {
        pantalla->draw(boton[4]);
        pantalla->draw(*textoBtn[4]);
    }
    pantalla->display();
}

void juego::DibujarNivel5() {
    pantalla->clear();
    pantalla->draw(fondo[1]);
    pantalla->draw(*sprite1);
    pantalla->draw(puntos[0]); // contador de puntos
    pantalla->draw(puntos[1]);
    pantalla->draw(puntos[2]);

    pantalla->draw(muro[0]); // el muro de abajo
    pantalla->draw(muro[1]); // el muro de arriba
    pantalla->draw(muro[2]); // el muro de izquierda
    pantalla->draw(muro[3]); // el muro de derecha
    pantalla->draw(meta);
    pantalla->draw(muro[4]); // muro interior
    pantalla->draw(muro[5]); // muro interior
    pantalla->draw(muro[6]); // muro interior
    pantalla->draw(muro[7]); // muro interior
    pantalla->draw(muro[8]); // muro interior
    pantalla->draw(muro[9]); // muro interior
    pantalla->draw(muro[10]); // muro interior
    pantalla->draw(muro[11]); // muro interior
    pantalla->draw(muro[12]); // muro interior
    pantalla->draw(muro[13]); // muro interior
    pantalla->draw(muro[14]); // muro interior

    pantalla->draw(caja[0]); // Caja
    pantalla->draw(caja[1]);
    pantalla->draw(caja[2]);
    pantalla->draw(boton[3]);

    pantalla->draw(boton[2]);
    pantalla->draw(*textoBtn[2]);
    pantalla->draw(*textoBtn[3]);
    pantalla->draw(boton[6]);
    pantalla->draw(*textoBtn[6]);
    if (contarPuntos.front() == 3) {
        pantalla->draw(boton[4]);
        pantalla->draw(*textoBtn[4]);
    }
    pantalla->display();
}

void juego::DibujarFinal() {
    pantalla->clear(Color::White);
    pantalla->draw(fondo[4]);
    pantalla->draw(boton[2]);
    pantalla->draw(*textoBtn[2]);
    pantalla->display();
}