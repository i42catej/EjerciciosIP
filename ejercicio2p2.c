#include <stdio.h>

int main() {

  int ladoa, ladob, ladoc;
  printf("Introduce el ladoa\n");
  scanf("%d",&ladoa);
  printf("Introduce el ladob\n");
  scanf("%d",&ladob);
  printf("Introduce el ladoc\n");
  scanf("%d",&ladoc);
  int suma=ladob+ladoc;
  if(ladoa<(ladob+ladoc)){
    printf("%d ladoa %d ladob",ladoa,ladob);
    if((ladoa==ladob)||(ladoa==ladoc)||(ladoc==ladob))
      {
         if(ladoa==ladob && ladoa==ladoc)
        {
          printf("\nEl triangulo es un triangulo equilatero");
        }
      else printf("\nEl triangulo es un triangulo isóceles");
    }

      else printf("\nEl triangulo es un triangulo escaleno");
  }
  else printf("ERROR:Los lados introducidos no son de un triangulo");
  return 0;
}
