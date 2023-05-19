/*Faça um algoritmo Linguagem C que receba quatro números reais e calcule a média
deles.*/

#include<stdio.h>
#include<stdlib.h>
#include "questao02.h"


void questao2(void){
    float numero1, numero2, numero3, numero4, Media;


    entrada2(&numero1, &numero2, &numero3, &numero4);

    processamento2(&numero1, &numero2, &numero3, &numero4, &Media);

    saida2(Media);


}

void entrada2(float *num1, float *num2, float *num3, float *num4){
    printf("Informe  sua primeira nota:\n");
    scanf("%f",num1);
    printf("Informe  sua segunda nota:\n");
    scanf("%f",num2);
    printf("Informe  sua terceira nota:\n");
    scanf("%f",num3);
    printf("Informe  sua quarta nota:\n");
    scanf("%f",num4);

}

void processamento2(float *num1, float *num2, float *num3, float *num4, float *media){
    *media = (*num1 + *num2 + *num3 + *num4)/4.0;
}

void saida2(float media){
    printf("A sua media e: %.2f", media);
}
