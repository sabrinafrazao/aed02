#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Tipos de dados
    int NumeroInt = 10;
    float NumeroReal = 20.5039393;
    double NumeroDouble = 20.02245625487234;
    char caractere = 'M';
    char frase[50] = "uma frase completa";

    printf("Digite um numero: ");
    scanf("%d",&NumeroInt);
    printf("O numero digitado foi: %d\n",NumeroInt);

    printf("Digite um numero real e dupla precisao separado por virgula: \n");
    scanf("%f, %f",&NumeroReal, &NumeroDouble);
    printf("Float: %.2f  Double: %.151f\n", NumeroReal, NumeroDouble);

    fflush(stdin);
    printf("Digite uma letra: ");
    scanf("%c", &caractere);

    printf("Digite uma frase");




    printf("Hello world!\n");
    return 0;
}
