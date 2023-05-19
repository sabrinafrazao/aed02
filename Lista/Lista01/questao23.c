/*Crie um algoritmo que leia o percurso em quilômetros, o tipo do carro e informe o
consumo estimado de combustível, sabendo-se que um carro do tipo C faz 12 KM
com um litro de gasolina, um tipo B faz 9 KM e o tipo A faz 8 KM. Caso seja
fornecido um tipo de carro inválido o algoritmo deve alertar o fato.*/

#include<stdio.h>
#include<stdlib.h>
#include "questao23.h"

void questao23(void){
    float Km, consumo;
    char tipo_carro[5];

    entrada23(&Km, &tipo_carro);
    processamento23(&Km, &consumo, &tipo_carro);
}

void entrada23(float *km, char *carro){
   printf("Informe o percurso em km do carro : ");
   scanf("%f", km);
   printf("Informe o tipo de carro: ");
   gets(carro);

}

void processamento(float *km, float *con, char *carro){
    if(*carro == 'A' || *carro == 'a'){
       *con = *km/8;
    }
    else{
        if(*carro == 'B' || *carro == 'b'){
            *con = *km/9;
        }
        else{
            if(*carro == 'C' || *carro == 'c'){
                *con = *km/12;
            }
            else{
                printf("Tipo de carro invalido!");
            }
        }
    }

}
