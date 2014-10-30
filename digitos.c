#include <stdio.h>

int main() {
long int numero;

	printf("Introduzca un numero: \n");
	scanf("%d",&numero);

if(numero>=0 && numero<=9) {
printf("El numero: %d tiene 1 digito.\n", numero);
};

if(numero>=10 && numero<=99) {
printf("El numero: %d tiene 2 digitos.\n", numero);
};

if(numero>=100 && numero<=999) {
printf("El numero: %d tiene 3 digitos.\n", numero);
};

if(numero>=1000 && numero<=9999) {
printf("El numero: %d tiene 4 digitos.\n", numero);
};

if(numero>=10000 && numero<=99999) {
printf("El numero: %d tiene 5 digitos.\n", numero);
};

if(numero>=100000 && numero<=999999) {
printf("El numero: %d tiene 6 digitos.\n", numero);
};

if(numero>=1000000 && numero<=9999999) {
printf("El numero: %d tiene 7 digitos.\n", numero);
};

if(numero>=10000000 && numero<=9999999) {
printf("El numero: %d tiene 8 digitos.\n", numero);
};

if(numero>=100000000 && numero<=9999999) {
printf("El numero: %d tiene 9 digitos.\n", numero);
};

if(numero>=1000000000) {
printf("El numero: %d tiene mas de 10 digitos.\n", numero);
};





 return 0;
}
