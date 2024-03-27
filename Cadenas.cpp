#include "Cadenas.h"
#include<string>
using namespace std;

Cadenas::Cadenas() {
	longitud = 0;
}
Cadenas::~Cadenas() {

}
string Cadenas::get_cadenas() {
	return cadenas;
}
void Cadenas::set_cadenas(string car) {
	cadenas = car;
	longitud = cadenas.length();
}
int Cadenas::tamanio() {
	return longitud;
}
