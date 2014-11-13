#include <stdio.h>


int main() {
	
	int co1,fi1,co2,fi2;
	
	printf("Introduzca la columna1: ");
	scanf("%d", &co1);
	printf("Introduzca la columna2: ");
	scanf("%d", &co2);
	printf("Introduzca la fila1: ");
	scanf("%d", &fi1);
	printf("Introduzca la fila2: ");
	scanf("%d", &fi2);

	if(co1==co2 && fi1==fi2) {
	printf("Son la misma casilla\n");
	}
	
	if(co1==co2 && fi1!=fi2) {
	printf("Estan en la misma columna\n");
	} else {
			if(fi1==fi2 && co1!=co2) {
			printf("Estan en la misma fila\n");
			}
			if(co1==fi1 && co2==fi2) {
			printf("Estan en la diagonal\n");
			}
		}




 return 0;
}
