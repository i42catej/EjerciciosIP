#include <stdio.h>

int main() {

int num,opc=0;
int max=0;
int min=0;
int contador=0;
do{
  printf("Introduzca un numero\n");
  scanf("%d",&num);
  if(contador==0){
    min=num;
    max=num;
  }
  if(num>max){
    max=num;
  }
  if(num<min){
    min=num;
  }
  contador++;
  printf("Si desea dejar de introducir numeros introduzca -1\n");
  scanf("%d",&opc);
}while(opc!=-1);
printf("El maximo es: %d\n El minimo es:%d\n",max,min);
  return 0;
}

