#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 10


void entrada3(int numeros[]) {
    int i;
    printf("\nEntre com dez números para preencher a lista e pressione enter após digitar cada um:\n");

    for (i = 0; i < TAM; i++) {
        scanf("%d", &numeros[i]);
    }

    printf("LIsta em ordem original:\n");

    for (i = 0; i < TAM; i++) {
        printf("%4d ", numeros[i]);
    }
}

void processamento3(int numeros[]) {
    int i,j, aux, Menor;

    // Algoritmo de ordenação selectionSort:

    for(int i=0;i<TAM-1;i++){
        Menor=i;
        for(int j=i+1 ; j<TAM ; j++){
            if(numeros[Menor] > numeros[j])
                Menor=j;
        }
        if(i!=Menor){
            aux=numeros[i];
            numeros[i]=numeros[Menor];
            numeros[Menor]=aux;
        }
    }
}

void saida3(int numeros[]) {
    int i;
    printf("\nLista em ordem crescente utilizando SelectionSort:\n");

    for (i = 0; i < TAM; i++) {
        printf("%4d", numeros[i]);
    }

    printf("\n");
}

void selectionsort(void) {
    setlocale(LC_ALL, "");

    int num[TAM];
    entrada3(num);
    processamento1(num);
    saida1(num);

}
