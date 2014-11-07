#include <stdio.h>

int main () {

float peso, altura;
float  masa=0;

printf("Introduzca el peso: ");
scanf("%f", &peso);

printf("Intnroduzca la altura: ");
scanf("%f", &altura);

masa=(peso/(altura*altura)*10000);
printf("El peso vale: %f\n", peso);
printf("La altura vale: %f\n", altura);
printf("La masa vale: %f\n", masa);

if(masa<16) {
printf("Ingresa en un hospital...PERO YA!!!!!!\n");
}

if (masa>=16 && masa<17) {
printf("Infrapeso\n");
}

if(masa>=17 && masa <18) {
printf("Bajo peso\n");
}

if(masa>=18 && masa<25) {
printf("Peso normal (saludable)\n");
}

if(masa>=25 && masa<30) {
printf("Tienes sobrepeso, deja de comer\n");
}

if(masa>= 30 && masa<35) {
printf("Sobrepeso cronico, tienes mucha cabeza\n");
}

if(masa>=35 && masa<40) {
printf("Obesidad PreMorbida\n");
}

if(masa>=40) {
printf("Eres un Fran Maestre\n");
}

return 0;
}
