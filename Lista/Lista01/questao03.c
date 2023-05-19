#include <stdio.h>
#include <stdlib.h>
#include "questao03.h"

void questao03(void){
    float nota1, nota2, Media;
    int peso1, peso2;

    entrada_03(&nota1, &nota2, &peso1, &peso2);
    processamento_03(&nota1, &nota2, &peso1, &peso2, &Media);
    saida_03(Media);
}

void entrada_03(float *n1, float *n2, int *p1, int *p2){
    printf("Entre com a primeira nota: ");
    scanf("%f", n1);
    printf("Entre com a segunda nota: ");
    scanf("%f", n2);
    printf("Entre com o primeiro peso: ");
    scanf("%d", p1);
    printf("Entre com a segundo pesp: ");
    scanf("%d", p2);

}

void processamento_03(float *n1, float *n2, int *p1, int *p2, float *media){
    *media = ((*n1) * (*p1) + (*n2) * (*p2)) / (*p1 + *p2);
}

void saida_03(float media){
    printf("\nMedia: %.2f", media);
}

