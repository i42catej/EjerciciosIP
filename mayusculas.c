#include <ctype.h>
#include <stdio.h>


int main() {
	char caracter;
	int contador=0;
	
	do {
	printf("Introduzca un caracter: \n");
	scanf("%c", &caracter);
	getchar();
	if(isupper(caracter)) {
		contador++;
	}
	
	} while (caracter!= ' ');

	printf("El total de mayusculas es: %d\n", contador);

 return 0;
}
