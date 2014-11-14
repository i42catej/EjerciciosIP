#include <stdio.h>  
#include <stdlib.h>
int main() {
	printf("Introduce un numero\n");
	int num;
	int suma=0;
	int s=1;
	scanf("%d",&num);
	while(s<=num){
		if((num%s)==0){
			suma+=s;
		}
		s++;
	}
	if((suma-num)==num){
		printf("EL NUMERO ES PERFECTO\n");
	}
	else printf("NO ES PERFECTO\n");

}