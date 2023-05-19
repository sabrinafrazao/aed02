/*Faça um algoritmo Linguagem C que receba os valores antigo e novo de um produto,
e calcule a porcentagem de aumento que o mesmo teve.*/

#include <stdio.h>
#include <stdlib.h>
#include "questao06.h"

void questao06(void){
    float valor_Antigo, valor_Novo, porcentagem;

    entrada_06(&valor_Antigo, &valor_Novo);
    processamento_06(&valor_Antigo, &valor_Novo, &porcentagem);
    saida_06(porcentagem);
}

void entrada_06(float *antigo, float *novo){
    printf("Informe valor antigo do produto: ");
    scanf("%f", antigo);
    printf("Informe o valor novo do produto: ");
    scanf("%f", novo);
}

void processamento_06(float *antigo, float *novo, float *porc){
    *porc = ((*novo - *antigo) / *antigo) * 100;
}

void saida_06(float porc){
    printf("\nPorcentagem de aumento eh: %f", porc);
}

