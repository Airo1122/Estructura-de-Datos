#pragma once
#include <string>
using namespace std;
class Cadenas
{
private:
	int longitud;
	string cadenas;
public:
	Cadenas();
	~Cadenas();
	string get_cadenas();
	void set_cadenas(string car);
	int tamanio();
};
