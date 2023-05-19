/*Crie um algoritmo que após receber o Salário Bruto, calcule o salário líquido
descontando 10% quando o salário bruto for menor que R$ 2000, caso contrário
descontar 20%. No final, exiba o salário líquido.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "questao16.h"

void questao16(void){
    float salarioBruto, salarioLiquido;

    entrada16(&salarioBruto);
    processamento16(&salarioBruto, &salarioLiquido);
    saida16(salarioLiquido);
}

void entrada16(float *salario_bruto){
    printf("Informe o salario bruto: ");
    scanf("%f", salario_bruto);
}

void processamento16(float *salario_bruto, float  *salario_liquido){
    if(*salario_bruto < 2000){
        *salario_liquido = *salario_bruto - ((*salario_bruto * 10) / 100.0);
    }else{
         *salario_liquido = *salario_bruto - ((*salario_bruto * 20) / 100.0);
    }
}

void saida16(float salario_liquido){
    printf("\nO salario liquido e: %f", salario_liquido);
}

