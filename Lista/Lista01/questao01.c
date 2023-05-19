#include<stdio.h>
#include<stdlib.h>
#include "questao01.h"


void questao1(void){
    int numero1;
    int numero2;
    int numero3;
    int resultado;

    entrada1(&numero1, &numero2, &numero3, &resultado);

    processamento1(&numero1, &numero2, &numero3, &resultado);

    saida1(numero1, numero2, numero3, resultado);


}

void entrada1(int *num1, int *num2, int *num3){
    printf("Informe um numero:\n");
    scanf("%d",num1);
    printf("Informe um numero:\n");
    scanf("%d",num2);
    printf("Informe um numero:\n");
    scanf("%d",num3);

}

void processamento1(int *num1, int *num2, int *num3, int *soma){
    *soma = *num1 + *num2 + *num3;
}

void saida1(int num1, int num2, int num3, int soma){
    printf("A soma dos numeros %d + %d + %d e igual a %d ", num1, num2, num3, soma);
}


