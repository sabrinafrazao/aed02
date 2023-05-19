#include <stdio.h>
#include <stdlib.h>
#include "questao11.h"

void questao11(void) {
    int numero;
    int resposta;

    entrada11(&numero);

    processamento11(&numero, &resposta);

    saida11(resposta);
}


void entrada11(int *num){
    printf("Digite um numero: ");
    scanf("%d", num);
}

int processamento11(int*num, int*res) {
    *res = (*num >= 100 && *num <= 500);
}

void saida11( int res) {
    if (res) {
        printf("O numero esta entre 100 e 500.");
    } else {
        printf("O número  nao esta entre 100 e 500.");
    }
}
