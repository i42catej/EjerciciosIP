#include <stdio.h>


int main () {

int numero,resto,numeroi;

printf("Introduzca el numero: ");
scanf("%d", &numero);

while(numero!=0) {
resto=numero%10;
numeroi= numeroi*10+resto;
numero=numero/10;

}

printf("El numero invertido vale: %d\n",numeroi);


 return 0;
}
