/*Crie um algoritmo que leia três números e exibe o maior deles. Caso os números
sejam iguais exibir a seguinte mensagem: “Número idênticos”.*/

#include<stdio.h>
#include<stdlib.h>
#include "questao20.h"

void questao20(void){
    float numero1;
    float numero2;
    float numero3;
    float Maior;

    entrada20(&numero1, &numero2, &numero3);

    processamento20(&numero1, &numero2, &numero3, &Maior);

    saida20(numero1, numero2, numero3, Maior);

}

void entrada20(float *n1, float *n2, float *n3){
    printf("Escreva o primeiro numero: ");
    scanf("%f", n1);
    printf("Escreva o segundo numero: ");
    scanf("%f", n2);
    printf("Escreva o terceiro numero: ");
    scanf("%f", n3);
}

void processamento20(float *n1, float *n2, float *n3, float *maior){
    *maior = 0;

    if(*n1 == *n2 && *n1 == *n3){
        *maior = 1;
    }
    else{
          if(*n1>*n2 &&  *n1>*n3){
            *maior = *n1;
        }
        else{
            if(*n2>*n1 &&  *n2>*n3){
                *maior = *n2;
            }
            else{
                if(*n3>*n1 &&  *n3>*n2){
                    *maior = *n3;
                }
            }
        }
    }


}

void saida20(float n1, float n2, float n3, float maior){

    if(maior == 1){
        printf("Numeros identicos");
    }
    else{
        printf("O maior numero entre os tres e : %.2f ", maior);
    }
}


