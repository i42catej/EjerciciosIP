#include <stdio.h>

int main() {

float nteorico, npracticas, nmicros, nparticipacion, ncuestionarios, nfinal;

printf("Introduzca la nota del examen teorico: \n");
scanf("%f", &nteorico);
printf("Introduzca la nota del examen practico: \n");
scanf("%f", &npracticas);
printf("Introduzca la nota de pruebas micros: \n");
scanf("%f", &nmicros);
printf("Introduzca la nota de participacion: \n");
scanf("%f", &nparticipacion);
printf("Introduzca la nota de cuestionarios: \n");
scanf("%f", &ncuestionarios);

if(ncuestionarios>=5 && nteorico<ncuestionarios) {
nteorico=ncuestionarios;
};

if(nteorico>=5 && npracticas>=5) {
nfinal= (nteorico*0.2)+(npracticas*0.5)+(nmicros*0.15)+(nparticipacion*0.1)+(ncuestionarios*0.05);
printf("La nota final vale: %f\n", nfinal);
} else {
printf("No hace media al ser alguna nota menor de 5: %f practico %f teoria\n", npracticas, nteorico);
}


 return 0;
}
