//Universidad Politécnica de Tulancingo
//Ingeniería en Electrónica y Telecomunicaciones 
//Lógica de Programación
//Ordoñez Juárez D
//Programa para ordenar valores de mayor a menor dentro de main

#include <stdio.h>
#include <stdlib.h>
int const n = 5;
int main()
{
	int a[n], indice, limite, pivote;
	indice = 0;
	while (indice < n) {
		printf("\nCaptura a[%d]", indice);
		scanf_s("%d", &a[indice]);  
		indice = indice + 1;
	}
	printf("\nEl arreglo original es: ");
	indice = 0;
	while (indice < n){
		if (indice > 0) printf(",");
		printf("%d", a[indice]);
		indice = indice + 1;
		}
	printf("\n");
	indice = 0;
	limite = n - 1;
	while (limite > 0) {
		while (indice < limite) {
			if (a[indice] < a[indice + 1]) {
				pivote = a[indice + 1];
				a[indice + 1] = a[indice];
				a[indice] = pivote;
			}
			indice = indice + 1;
		}
		limite = limite - 1;
		indice = 0;
	}
	printf("\n");
	printf("El arreglo ordenado es: " );
	indice = 0;
	while (indice < n) {
		if (indice > 0)printf(","); 
		printf("%d", a[indice]);
		indice = indice + 1;
		
	}
}

