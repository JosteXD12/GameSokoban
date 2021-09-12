#include "SFML/Graphics.hpp"
#include "iostream"

using namespace sf;
using namespace std;

CircleShape Circulo(float radio, float x, float y) {

	CircleShape circulo(radio);
	circulo.setPosition(x, y);
	return circulo;
}

