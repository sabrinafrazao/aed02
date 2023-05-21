#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define TAM 10

void entrada5(int *V){
    int i;
    printf("Informe 10 numeros:\n");
    for (i = 0; i < TAM; i++) {
        scanf("%d", &V[i]);
    }
    printf("\n");
}

int particiona(int *V, int inicio, int final){
    int esq, dir, pivo, aux;
    esq = inicio;
    dir = final;
    pivo = V[inicio];
    while(esq < dir){
        while(esq <= final && V[esq] <= pivo)
            esq++;

        while(dir >= 0 && V[dir] > pivo)
            dir--;

        if(esq < dir){
            aux = V[esq];
            V[esq] = V[dir];
            V[dir] = aux;
        }
    }
    V[inicio] = V[dir];
    V[dir] = pivo;
    return dir;
}

void quickSort(int *V, int inicio, int fim) {
    int pivo;
    if(fim > inicio){
        pivo = particiona(V, inicio, fim);
        quickSort(V, inicio, pivo-1);
        quickSort(V, pivo+1, fim);
    }
}

void saida5(int *V, int inicio, int fim){
    printf("A lista ordenada: ");
    for (int i = inicio; i <= fim; i++) {
        printf("%d ", V[i]);
    }
}

void QuickSort(void){
    int vet[TAM];
    int N = TAM;

    entrada5(vet);

    quickSort(vet, 0, N-1);

    saida5(vet, 0, N-1);
}
