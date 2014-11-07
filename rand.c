
#include <stdio.h>  /* ◄── */ 
#include <time.h>
#include <stdlib.h>
int main() 
{ srand(time(NULL));
 int numrand= rand()%101;
 
 int num;
 do{
 	printf("Introduce un numero\n");
 	scanf("%d",&num);
 	if(num<numrand && num>0){
 		printf("El numero aleatorio es mayor\n");
 	}
 	if(num>numrand && num>0){
 		printf("El numero aleatorio es menor\n");
 	}

	}while(num!=numrand && num>0);
if(num<0){
	printf("Te has rendido");
}
else {	
printf("Enhorabuena!\n");
}
}