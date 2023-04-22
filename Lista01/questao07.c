#include <stdio.h>
#include <stdlib.h>
#include "questao07.h"



void entrada7(float *raio){
    printf("Digite o raio do circulo: ");
    scanf("%f", raio);
}

void processamento7(float *raio, float *diametro, float *perimetro, float *area, float *volume){
    *diametro = 2 * (*raio);
    *perimetro = 2 * 3.14 * (*raio);
    *area = 3.14 * (*raio * *raio);
    *volume = (4.0/3.0) * 3.14 * (*raio * *raio * *raio);

}

void saida7( float diametro, float perimetro, float area, float volume){

    printf("O diametro do circulo e: %.2f\n", diametro);
    printf("O perimetro do circulo e: %.2f\n", perimetro);
    printf("A area do circulo e: %.2f\n", area);
    printf("O volume da esfera com base no circulo e: %.2f\n", volume);

}

void questao07(void){
   float Raio;
   float Diametro;
   float Perimetro;
   float Area;
   float Volume;

   entrada7(&Raio);

   processamento7(&Raio, &Diametro, &Perimetro, &Area, &Volume);

   saida7(Diametro, Perimetro, Area, Volume);
}
