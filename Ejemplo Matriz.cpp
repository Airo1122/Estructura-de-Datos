#include <iostream>
#include "Matriz.h"
#define MAX 20
using namespace std;
int main()
{
		int matriz[MAX][MAX], matriz1[MAX][MAX], matriz2[MAX][MAX], fil, col, may, opc;
		float prom;
		// Crear el objeto de la clase Matriz
		Matriz Mat1, Mat2, Mat3;
		do {
			cout << "Ingrese el numero de filas: ";
			cin >> fil;
		} while ((fil <= 0) || (fil > MAX));
		Mat1.set_fil(fil); //Cambiando el valor 

		do {
			cout << "Ingrese el numero de columnas: ";
			cin >> col;
		} while ((col <= 0) || (col > MAX));
		//Menu
		Mat1.set_col(col);
		do {
			cout << "\t Menu\n";
			cout << "\t ====\n\n";
			cout << "(1) Cargar Matriz\n";
			cout << "(2) Mostrar Matriz\n";
			cout << "(3) Promedio Matriz\n";
			cout << "(4) Mayor Matriz\n";
			cout << "(5) Sumar Matriz\n";
			cout << "(0) Salir\n";
			cout << "Opcion:";
			cin >> opc;
			switch (opc) {
			case 1: Mat1.cargarmat(matriz);
					Mat2.cargarmat(matriz1);
					Mat3.cargarmat(matriz2);
				break;
			case 2: Mat1.mostrarmat(matriz, fil, col);
				break;
			case 3: prom = Mat1.promedio(matriz, fil, col);
				cout << "El valor promedio es: " << prom << endl;
				break;
			case 4: cout << "El mayor es: " << Mat1.mayor(matriz, fil, col);
				break;
			case 5: cout << "La suma es: " << Mat1.sumarMat(matriz1,matriz2,matriz);
				break;
			case 0: cout << "Salir\n";
				break;
			default: cout << "Error\n";
				break;
			}
			system("pause");
			system("cls"); // Limpie la pantalla y funciona stdlib
		} while (opc != 0);
}
