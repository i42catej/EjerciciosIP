#include <stdio.h>


void anio();
int edad( int anionacimiento, int anioactual);
void mayoredad(int edad);

int main() {
int an, aa, ed;


anio();
printf("Introduzca el año de nacimiento\n");
scanf("%d", &an);
printf("Introduzca el año actual\n");
scanf("%d", &aa);
ed= edad(an, aa);
printf("La edad de la persona es: %d\n", ed);
mayoredad(ed);

 return 0;
}

void anio () {
	int anio;	
	do {
	printf("Introduzca un año menor a 2014\n");
	scanf("%d", &anio);
	} while (anio>=2014);
 return;
}

int edad( int anionacimiento, int anioactual) {
	int resultado;	
	resultado= anioactual-anionacimiento;
	return resultado;
}

void mayoredad(int edad) {

	if(edad>=18) {
	printf("La persona es mayor de edad\n");
	} else {
	printf("La persona es menor de edad\n");
	}
return;
}
	
