/*Crie um algoritmo que leia um número inteiro e informe se ele é par ou ímpar.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "questao14.h"

void questao14(void){
    float numero;
    int par_impar;

    entrada_14(&numero);
    processamento_14(&numero, &par_impar);
    saida_14(par_impar);
}

void entrada_14(int *num){
    printf("Informe um numero: ");
    scanf("%d", num);
}

void processamento_14(int *num, int *impar_par){
    *impar_par = *num % 2 == 0;
}

void saida_14(int impar_par){
    if(impar_par){
        printf("\nO numero e par\n");
    }else{
        printf("\nO numero e impar.\n");
    }
}

