/*Crie um algoritmo que leia dois valores diferentes e determine o maior.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "questao15.h"

void questao15(void){
    int numero1, numero2, Maior;

    entrada15(&numero1, &numero2);
    processamento15(&numero1, &numero2, &Maior);
    saida15(numero1, numero2, Maior);
}

void entrada15(int *n1, int *n2){
    printf("Informe um numero: ");
    scanf("%d", n1);
    printf("Informe outro numero: ");
    scanf("%d", n2);
}

void processamento15(int *n1, int *n2, int *maior){
    *maior = (*n1 > *n2);
}

void saida15(int n1, int n2, int maior){
    if(maior){
        printf("\nO maior numero e: %d\n", n1);
    }else{
         printf("\nO maior numero e: %d\n", n2);
    }
}

