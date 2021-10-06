#include "main.h" 

void juego::guardarJuego() {
	coordenadas.push(pantallaActual);
	if (pantallaActual == 1 ) {
		for (int i = 4; i < 9; i++) {
			objetos.push("#");
			coordenadas.push(muro[i].getPosition().x);
			coordenadas.push(muro[i].getPosition().y);
		}
		objetos.push("@"); //jugador
		coordenadas.push(sprite1->getPosition().x);
		coordenadas.push(sprite1->getPosition().y);
		objetos.push("$"); //caja
		coordenadas.push(caja[0].getPosition().x);
		coordenadas.push(caja[0].getPosition().y);
		objetos.push("!"); // meta
		coordenadas.push(meta.getPosition().x);
		coordenadas.push(meta.getPosition().y);
	}
	if (pantallaActual == 2) {
		for (int i = 4; i < 13; i++) {
			objetos.push("#");
			coordenadas.push(muro[i].getPosition().x);
			coordenadas.push(muro[i].getPosition().y);
		}
		objetos.push("@"); //jugador
		coordenadas.push(sprite1->getPosition().x);
		coordenadas.push(sprite1->getPosition().y);
		objetos.push("$"); //caja
		coordenadas.push(caja[0].getPosition().x);
		coordenadas.push(caja[0].getPosition().y);
		objetos.push("!"); // meta
		coordenadas.push(meta.getPosition().x);
		coordenadas.push(meta.getPosition().y);
	}
	if (pantallaActual == 3) {
		for (int i = 4; i < 13; i++) {
			objetos.push("#");
			coordenadas.push(muro[i].getPosition().x);
			coordenadas.push(muro[i].getPosition().y);
		}
		objetos.push("@"); //jugador
		coordenadas.push(sprite1->getPosition().x);
		coordenadas.push(sprite1->getPosition().y);
		for (int i = 0; i < 2; i++) {
			objetos.push("$"); //caja
			coordenadas.push(caja[i].getPosition().x);
			coordenadas.push(caja[i].getPosition().y);
		}
		objetos.push("!"); // meta
		coordenadas.push(meta.getPosition().x);
		coordenadas.push(meta.getPosition().y);
	}
	if (pantallaActual == 4 || pantallaActual==5) {
		for (int i = 4; i < 15; i++) {
			objetos.push("#");
			coordenadas.push(muro[i].getPosition().x);
			coordenadas.push(muro[i].getPosition().y);
		}
		objetos.push("@"); //jugador
		coordenadas.push(sprite1->getPosition().x);
		coordenadas.push(sprite1->getPosition().y);
		for (int i = 0; i < 3; i++) {
			objetos.push("$"); //caja
			coordenadas.push(caja[i].getPosition().x);
			coordenadas.push(caja[i].getPosition().y);
		}
		objetos.push("!"); // meta
		coordenadas.push(meta.getPosition().x);
		coordenadas.push(meta.getPosition().y);
	}
	remove("Objetos.txt");
	remove("Coordenadas.txt");
	Esc.open("Objetos.txt", ios::out | ios::app);
	while (objetos.empty() != true) {
		Esc << objetos.front() << endl;
		objetos.pop();
	}
	Esc.close();

	Esc.open("Coordenadas.txt", ios::out | ios::app);
	while (coordenadas.empty() != true) {
		Esc << coordenadas.front() << endl;
		coordenadas.pop();
	}
	Esc.close();
}
void juego::lectura() {
	Lec.open("Objetos.txt", ios::in);
	if (!Lec.fail())
	{
		Lec >> o;
		while (!Lec.eof())
		{
			objetos.push(o);
			Lec >> o;
		}
	}
	Lec.close();
	Lec.open("Coordenadas.txt", ios::in);
	if (!Lec.fail())
	{
		Lec >> o;
		while (!Lec.eof())
		{
			coordenadas.push(stoi(o));
			Lec >> o;
		}
	}
	Lec.close();
}
void juego::cargarJuego() {

	int n = 4, m = 0, X = 0, Y = 0;
	pantallaActual = coordenadas.front();
	if (pantallaActual == 1) { objetosNivel1(); }
	if (pantallaActual == 2) { objetosNivel2(); }
	if (pantallaActual == 3) { objetosNivel3(); }
	if (pantallaActual == 4) { objetosNivel4(); }
	if (pantallaActual == 5) { objetosNivel5(); }
	coordenadas.pop();
	while (!objetos.empty() && !coordenadas.empty()) {
		cout << objetos.front() << endl;
		if (objetos.front() == "#") {
			Y = coordenadas.front();
			coordenadas.pop();
			X = coordenadas.front();
			coordenadas.pop();
			muro[n].setPosition(Vector2f(Y, X));
			n++;
		}
		if (objetos.front() == "$") {
			Y = coordenadas.front();
			coordenadas.pop();
			X = coordenadas.front();
			coordenadas.pop();
			caja[m].setPosition(Vector2f(Y, X));
			m++;
		}
		if (objetos.front() == "@") {
			Y = coordenadas.front();
			coordenadas.pop();
			X = coordenadas.front();
			coordenadas.pop();
			sprite1->setPosition(Vector2f(Y, X));
		}
		if (objetos.front() == "!") {
			Y = coordenadas.front();
			coordenadas.pop();
			X = coordenadas.front();
			coordenadas.pop();
			meta.setPosition(Vector2f(Y, X));
		}
		objetos.pop();
	}
}