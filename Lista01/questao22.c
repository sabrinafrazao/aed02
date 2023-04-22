/*Sabendo que somente os municípios que possuem mais de 200.000 eleitores têm
segundo turno nas eleições para prefeito quando o 1o colocado não obtém mais do
que 50% dos votos, crie um algoritmo que leia o nome do município, a quantidade
de eleitores e o número de votos do candidato mais votados e informe se terá ou não
segundo turno na eleição municipal.*/

#include<stdio.h>
#include<stdlib.h>
#include "questao22.h"

void questao22(void){
    char municipio[50];
    int qtd_eleitores, qtd_votos;

    entrada22(&municipio, &qtd_eleitores, &qtd_votos);
    processamento22(&qtd_eleitores, &qtd_votos);
}

void entrada22(char *municipio_nome, int *eleitores, int *votos){

    printf("Digite o nome do municipio: ");
    gets(municipio_nome);
    printf("Informe a quantidade de eleitores: ");
    scanf("%d", eleitores);
    printf("Informe a quantidade de votos do canditado mais votado : ");
    scanf("%d", votos);
}

void processamento22( int *eleitores, int *votos){
    if(*eleitores > 200000){
        if(*votos < *eleitores/2){
            printf("Vai ter o segundo turno");
        }
        else{
            printf("Não haverá segundo turno");
        }
    }
    else {
        printf("O municipio nao tem eleitores suficientes para ter segundo turno.\n");
    }

}
