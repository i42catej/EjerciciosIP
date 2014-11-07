
#include <stdio.h>  /* ◄── */ 
#include <time.h>
#include <stdlib.h>
int main() {
	printf("Introduce un numero\n");
	int num;
	int s=0;
	scanf("%d",&num);
	while(num>=10){
		s+=num%10;
		num=num/10;

	}
	printf("La suma de los digitos es:%d\n",s+num);
}