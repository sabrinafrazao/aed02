/* Crie um algoritmo que leia duas notas para calcular a média do aluno e determinar
se o mesmo foi aprovado ou reprovado. A média para aprovação é 7.*/

#include <stdio.h>
#include <stdlib.h>
#include "questao12.h"

void questao12(void){
    float nota1;
    float nota2;
    float media;

    entrada12(&nota1, &nota2);

    processamento12(&nota1, &nota2, &media);

    saida12(nota1, nota2, media);

}

void entrada12(float *not1, float *not2){
    printf("Informe sua primeira nota:\n");
    scanf("%f", not1);
    printf("Informe sua primeira nota:\n");
    scanf("%f", not2);
}

void processamento12(float *not1, float *not2, float *Media){
    *Media = (*not1 + *not2)/2.0;
}

void saida12(float not1, float not2, float Media){
    if(Media <7){
        printf("A sua media foi %.2f, infelizmente voce nao passou!", Media);
    }
    else{
        printf("A sua nota foi %.2f, Parabens voce esta aprovado!!", Media);
    }
}
