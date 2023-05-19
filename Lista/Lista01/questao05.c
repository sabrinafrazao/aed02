/*Fa�a um algoritmo Linguagem C que receba o sal�rio-base e a quantidade de
dependentes, e calcule o sal�rio l�quido sabendo que, para cada filho, o funcion�rio
recebe o sal�rio fam�lia de R$ 32,00 e, ao final, paga imposto de renda de 27,5%
sobre o sal�rio bruto.*/


#include <stdio.h>
#include <stdlib.h>
#include "questao05.h"

void questao05(void){
    float salario_base, salario_bruto, salario_liq;
    int dependentes;

    entrada_05(&salario_base, &dependentes);
    processamento_05(&salario_base, &dependentes, &salario_bruto, &salario_liq);
    saida_05(salario_liq);
}


void entrada_05(float *sBa, int *dep){
    printf("Informe seu salario base: ");
    scanf("%f", sBa);
    printf("Informe o numero de dependentes: ");
    scanf("%d", dep);
}

void processamento_05(float *sBa, int *dep, float *sBr, float *sLiq){
    *sBr = *sBa + ((*dep) * (32.0));
    *sLiq = *sBr - ((*sBr) * (27.5)) / 100.0;
}

void saida_05(float sLiq){
    printf("\nSalario liquido: %.2f", sLiq);
}

