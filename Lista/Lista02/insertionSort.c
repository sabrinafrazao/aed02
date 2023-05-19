#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 10

int trocas=0;
int comp=0;

void entrada2(int numeros[]) {
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

void processamento2(int numeros[]) {
    int i,j, aux;

    // Algoritmo de ordenação insertionSort:
    for(i=0; i<TAM-1; i++) {
      	comp++;
        if(numeros[i]>numeros[i+1]) {
           aux=numeros[i+1];
           numeros[i+1]=numeros[i];
		   numeros[i]=aux;
           j=i-1;
           trocas++;
           while(j>=0){
		   	  comp++;
		   	  if(aux<numeros[j]){
                 numeros[j+1]=numeros[j];
		         numeros[j]=aux;
			     trocas++;
			  } else {
			  	 break;
			  }
			  j=j-1;
		   }
        }
    }
}

void saida2(int numeros[]) {
    int i;
    printf("\nLista em ordem crescente utilizando InsertionSort:\n");

    for (i = 0; i < TAM; i++) {
        printf("%4d", numeros[i]);
    }

    printf("\n");
}

void insertionsort(void) {
    setlocale(LC_ALL, "");

    int num[TAM];
    entrada2(num);
    processamento2(num);
    saida2(num);

}
