/*Um comerciante comprou um produto e quer vendê-lo com um lucro de 50% se o
valor da compra for menor que R$ 200, caso contrário o lucro será de 30%. Crie um
algoritmo que leia o valor da compra e exiba o valor da venda.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "questao17.h"

void questao17(void){
    float valorCompra, valorVenda;

    entrada17(&valorCompra);
    processamento17(&valorCompra, &valorVenda);
    saida_17(valorCompra, valorVenda);
}

void entrada17(float *valor_compra){
    printf("Informe o valor da compra do produto: ");
    scanf("%f", valor_compra);
}

void processamento17(float *valor_compra, float *valor_venda){
    if(*valor_compra < 200){
        *valor_venda = *valor_compra + ((*valor_compra * 50) / 100.0);
    }else{
         *valor_compra = *valor_compra + ((*valor_compra * 30) / 100.0);
    }
}

void saida17(float valor_venda){
    printf("\nO valor da venda saira de: %g reais", valor_venda);
}

