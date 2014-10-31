#include <stdio.h>

int main() {

float numero1, numero2;
int resultado;
printf("Introduzca el numero1: \n");
scanf("%f", &numero1);
printf("Introduzca el numero2: \n");
scanf("%f", &numero2);
int opc=0;
resultado=(numero1<numero2)?1:2;
if (resultado==1){
printf("El numero 2 es mayor\n");
} else {
printf("El numero 1 es mayor\n");
}
return 0;
}

