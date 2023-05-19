/*Suponha que um caixa disponha apenas de notas de 1, 10 e 100. Considerando que
alguém está pagando uma compra. escreva um algoritmo que mostre o número
mínimo de cada nota que o caixa dev fornecer como troco. O algoritmo receberá
como entrada o Valor da Compra e Valor do pagamento, ambos os valores são
inteiro. Caso o valor do pagamento seja inferior ao valor da compra o cálculo não
será efetuado deverá imprimir a seguinte mensagem: “Pagamento Negado”.*/

#include<stdio.h>
#include<stdlib.h>
#include "questao24.h"

void questao24(void){
    int valor_pag, valor_compra, um, dez, cem, troco;

    entrada24(&valor_pag, &valor_compra);
    processamento24(&valor_pag, &valor_compra, &um, &dez, &cem, &troco);
    saida24(valor_pag, valor_compra, um, dez, cem, troco);
}

void entrada24(int *pagamento, int *compra){
    printf("Informe o valor da compra: ");
    scanf("%d", compra);
    printf("Informe o valor do pagamento: ");
    scanf("%d", pagamento);

}

void processamento24(int *pagamento, int *compra, int *one, int *ten, int *hun, int *resto){

    *resto = *pagamento - *compra;

    *hun = *resto/100;
    *resto = *resto - ((*hun) * 100);

    *ten = *resto/10;
    *resto = *resto - ((*ten)* 10);

    *one = *resto;

}


void saida24(int pagamento, int compra, int one, int ten, int hun){

    if(pagamento < compra){
        printf("Pagamento Negado");
    }
    else{
        printf("Troco: %d notas de 100, %d notas de 10 e %d notas de 1", hun, ten, one);
    }

}
