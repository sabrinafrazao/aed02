/*Faça um algoritmo Linguagem C que receba o salário inicial, a porcentagem de aumento
e calcule o novo salário.*/

#include<stdio.h>
#include<stdlib.h>
#include "questao04.h"

void questao3(void){
    float salario_incial, porcentagem, novo_salario;

    entrada3( &salario_incial, &porcentagem);
    processamento3(&salario_incial, &porcentagem, &novo_salario);
    saida3(novo_salario);
}

void entrada3(float *antigo_salario, float *porc){
    printf("Informe o seu salario atual: ");
    scanf("%f", antigo_salario);
    printf("Informe a porcentagem de aumento: ");
    scanf("%f", porc);
}

void processamento3(float *antigo_salario, float *porc, float *salario){
    *salario = *antigo_salario + (((*antigo_salario)* (*porc))/100.0);
}

void saida3(float salario){
    printf("O  seu novo salario: %.2f", salario);

}

