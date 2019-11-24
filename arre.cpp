//Universidad Politécnica de Tulancingo
//Ingeniería en Electrónica y Telecomunicaciones 
//Lógica de Programación
//Ordoñez Juárez D
//Programa para ordenar de mayor a menor con arreglos

#include <stdio.h>
#include <stdlib.h>
int const n = 5;
void Captura(int arreglo[]) {
	int ind;
	//Capturar una lista de valores 
	ind = 0;
	while (ind < n) {
		printf("Captura a[%d]: ", ind);
		scanf_s("%d", &arreglo[ind]);
		ind = ind + 1;
	}
}
void Mostrar(int arre[]) {
	int indi;
	indi = 0;
	while (indi < n) {
		if (indi > 0) printf(", ");
		printf("%d", arre[indi]);
		indi = indi + 1;
	}
}
void(Ordenar(int ar[])) {
	int indice, limite, pivote;
	indice = 0;
	limite = n - 1;
	while (limite > 0) {
		while (indice < limite) {
			if (ar[indice] < ar[indice + 1]) {
				pivote = ar[indice + 1];
				ar[indice + 1] = ar[indice];
				ar[indice] = pivote;
			}
			indice = indice + 1;
		}
		limite = limite - 1;
		indice = 0;
	}
	indice = 0;
	while (indice < n) {
		if (indice > 0) printf(", ");
		printf("%d", ar[indice]);
		indice = indice + 1;
	}
}
int main() {
	int a[n];
	Captura(a);
	printf("\nEl arreglo original es: ");
	Mostrar(a);
	printf("\n");
	//Lo que sigue es ordenar
	Ordenar(a);
	printf("\nEl arreglo ordenado es: ");
	Mostrar(a);
	printf("\n");
}