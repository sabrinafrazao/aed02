#include <stdio.h>
#include <stdlib.h>
#include "questao08.h"

void entrada8(float *velocidade_km){
    printf("Digite a velocidade do veiculo em Km/h: ");
    scanf("%f", velocidade_km);
}


void processamento8(float velocidade_km, float *velocidade_ms){
      *velocidade_ms = (velocidade_km / 3.6);
}

void saida8(float velocidade_ms){
    printf("Velocidade em m/s: %.2f\n", velocidade_ms);

}

void questao08(void){
    float Km_h;
    float ms_s;

    entrada8(&Km_h);
    processamento8(Km_h, &ms_s);
    saida8(ms_s);

}
