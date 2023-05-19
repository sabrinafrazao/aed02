#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 10

void entrada1(int numeros[]) {
    int i;
    printf("\nEntre com dez números para preencher o array, e pressione enter após digitar cada um:\n");

    for (i = 0; i < TAM; i++) {
        scanf("%d", &numeros[i]);
    }

    printf("Ordem atual dos itens no array:\n");

    for (i = 0; i < TAM; i++) {
        printf("%4d ", numeros[i]);
    }
}

void processamento1(int numeros[]) {
    int contador, aux, i;

    // Algoritmo de ordenação bubblesort:
    for (contador = 1; contador < TAM; contador++) {
        for (i = 0; i < TAM - 1; i++) {
            if (numeros[i] > numeros[i + 1]) {
                aux = numeros[i];
                numeros[i] = numeros[i + 1];
                numeros[i + 1] = aux;
            }
        }
    }
}

void saida1(int numeros[]) {
    int i;
    printf("\nElementos do array em ordem crescente utilizando BubbleSort:\n");

    for (i = 0; i < TAM; i++) {
        printf("%4d", numeros[i]);
    }

    printf("\n");
}

void bubblesort(void) {
    setlocale(LC_ALL, "");

    int num[TAM];
    entrada1(num);
    processamento1(num);
    saida1(num);

}
