/*Crie um algoritmo que leia um número inteiro e informe se ele é ou não divisível por
5.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "questao13.h"

void questao13(void){
    int numero;
    int divisivel;

    entrada13(&numero);
    processamento13(&numero, &divisivel);
    saida13(divisivel);
}

void entrada13(int *num){
    printf("Entre com um numero: ");
    scanf("%d", num);
}

void processamento13(int *num, int *div){
    *div = *num % 5 == 0;
}

void saida13(int div){
    if(div){
        printf("\nO numero e divisivel por 5.\n");
    }else{
        printf("\nO numero nao e divisivel por 5.\n");
    }
}

