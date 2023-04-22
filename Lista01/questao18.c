/*Crie um algoritmo que leia a média das duas unidades para calcular a sua média final.
Em seguida exiba a média final e o resultado que pode ser aprovado, prova final ou
reprovado. A média de aprovação é 7, menor que 3 para reprovação e as demais prova
final.*/

#include <stdio.h>
#include <stdlib.h>
#include "questao18.h"

void questao18(void){
    float media_unidade1, media_unidade2, media_final;

    entrada18(&media_unidade1, &media_unidade2);
    processamento18(&media_unidade1, &media_unidade2, &media_final);
    saida18(media_final);
}

void entrada18(float *mediaU1, float *mediaU2){
    printf("Informe a media da unidade 1: ");
    scanf("%f", mediaU1);
    printf("Informe a media da unidade 2: ");
    scanf("%f", mediaU2);
}

void processamento18(float *mediaU1, float *mediaU2, float *mediaF){
    *mediaF = (*mediaU1 + *mediaU2) / 2.0;
}

void saida18(float mediaF){
    printf("\nMedia final: %g", mediaF);

    if(mediaF >= 7.0){
        printf("\nAPROVADO\n");
    }else if(mediaF < 3.0){
        printf("\nREPROVADO\n");
    }else{
        printf("\nPROVA FINAL\n");
    }
}

