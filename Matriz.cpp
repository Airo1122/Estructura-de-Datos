#include "Matriz.h"
#include <iostream>
using namespace std;
Matriz::Matriz() {

}
Matriz::~Matriz() {

}
int Matriz:: get_fil() {
	return fil;
}
void Matriz ::set_fil(int fila) {
	fil = fila;
}
int Matriz:: get_col() {
	return col;
}
void Matriz:: set_col(int columna) {
	col = columna;
}
void Matriz:: mostrarmat(int MAT[MAX][MAX], int m, int n) {
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++) {
			cout << MAT[i][j] << "\t";
		}
		cout << endl;
	}
}
void Matriz:: cargarmat(int MAT[MAX][MAX], int m, int n){
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++) {
			cout << "MAT[" << i << "][" << j << "]= ";
			cin >> MAT[i][j];
		}
}
float Matriz::promedio(int MAT[MAX][MAX], int m, int n) {
	float prom, s = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			s = s + MAT[i][j];
	prom = s / (m * n);
	return prom;
}
int Matriz:: mayor(int MAT[MAX][MAX], int m, int n) {
	int may = MAT[0][0];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (MAT[i][j] > may)
				may = MAT[i][j];
	return may;
}
void Matriz::sumarMAT(int MAT[MAX][MAX], int MAT2[MAX][MAX], int MAT3[MAX][MAX]) {
	for (int i = 0; i < fil; i++)
		for (int j = 0; j < col; j++)
			MAT3[i][j] = MAT[i][j] + MAT2[i][j];
}
