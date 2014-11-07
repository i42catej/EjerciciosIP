#include <stdio.h>

int main() {

int num1, num2, num3;
int max, min, med;

printf("Introduzca el numero 1: \n");
scanf("%d", &num1);
printf("Introduzca el numero 2: \n");
scanf("%d", &num2);
printf("Introduzca el numero 3: \n");
scanf("%d", &num3);

if(num1>num2 && num1>num3 && num3>num2) {
max=num1;
med=num3;
min=num2;
}

if(num1>num2 && num1>num3 && num2>num3) {
max=num1;
med=num2;
min=num3;
}

if(num2>num1 && num2>num3 && num1>num3) {
max=num2;
med=num1;
min=num3;
}

if(num2>num1 && num2>num3 && num3>num1) {
max=num2;
med=num3;
min=num1;
}

if(num3>num1 && num3>num2 && num1>num2) {
max=num3;
med=num1;
min=num2;
}

if(num3>num1 && num3>num2 && num2>num1) {
max=num3;
med=num2;
min=num1;
}

if(num3==num1 && num3==num2) {
max=num3;
med=num2;
min=num1;
}


printf("El maximo: %d\n",max);
printf("El medio: %d\n", med);
printf("El minimo: %d\n", min);

return 0;
}

