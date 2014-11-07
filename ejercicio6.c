#include <stdio.h>

int main() {

int mes, opcion;

printf("Introduzca el mes del año con mumero Ej: 9 (Septiembre)\n");
scanf("%d", &mes);

switch(mes) {
	case 1: printf("Tiene 31 dias\n");break;
	case 2:
		printf("Introduzca 1 si es bisiesto y 0 si no lo es\n");
		scanf("%d", &opcion);
		if(opcion==1) {
		printf("Tiene 29 dias\n");
		} else {
		printf("Tiene 28 dias\n");
		}
		break;
	case 3: printf("Tiene 31 dias\n");break;
	case 4: printf("Tiene 30 dias\n");break;
	case 5: printf("Tiene 31 dias\n");break;
	case 6: printf("Tiene 30 dias\n");break;
	case 7: printf("Tiene 31 dias\n");break;
	case 8: printf("Tiene 31 dias\n");break;
	case 9: printf("Tiene 30 dias\n");break;
	case 10: printf("Tiene 31 dias\n");break;
	case 11: printf("Tiene 30 dias\n");break;
	case 12: printf("Tiene 31 dias\n");break;
}
 return 0;
}
