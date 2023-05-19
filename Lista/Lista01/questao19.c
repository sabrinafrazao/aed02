/*Crie um algoritmo que leia tr�s lados de um tri�ngulo e determine se ele � equil�tero,
is�sceles ou escaleno. Quando os tr�s lados forem iguais trata-se de um tri�ngulo
equil�tero, dois lados iguais � um tri�ngulo is�sceles e os tr�s lados diferentes � um
tri�ngulo escaleno.*/

#include <stdio.h>
#include <stdlib.h>
#include "questao19.h"

void questao19(void){
    float lado1;
    float lado2;
    float lado3;

    entrada19(&lado1, &lado2, &lado3);

    processamento19(&lado1, &lado2, &lado3);

}

void entrada19( float *l1, float *l2, float *l3){

    printf("Digite o lado 1 do triagulo : \n");
    scanf("%f", l1);
    printf("Digite o lado 2 do triagulo : \n");
    scanf("%f", l2);
    printf("Digite o lado 3 do triagulo : \n");
    scanf("%f", l3);
}


void processamento19(float *l1, float *l2, float *l3){
    if(*l1 == *l2 && *l1 == *l3){
        printf("\nEquilatero\n");
    }
    else{
        if(*l1 == *l2 || *l1 == *l3 || *l2 == *l3){
            printf("\nIsosceles\n");
        }
        else{
            printf("\nEscaleno\n");
        }
    }
}
