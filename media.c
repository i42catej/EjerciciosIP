#include <stdio.h>

int main() {

int numero, i;
float resultado, suma=0.0, contador=0.0;

printf("Introduce el numero: ");
scanf("%d", &numero);

for(i=1;i<numero;i++) {

	if((numero%i)==0) {
	printf("%d es divisor de %d\n", i, numero);
	contador++;
	suma+=i;
	}
}

resultado=suma/contador;

printf("La media de los divisores vale: %f\n", resultado);


 return 0;
}
