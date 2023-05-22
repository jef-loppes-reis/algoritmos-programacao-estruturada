/*
8. Elabore um programa que faça a leitura de vários números inteiros até que se digite
um número negativo. O programa tem de retornar o maior e o menor número lido
*/

#include <stdio.h>

int main(){

    int num=0, maior=-1, menor=1000, n;

    do
    {
        printf("\nDigite um numero:\n");
        scanf("%d",&n);

        if (n > maior)
        {
            maior = n;
        }

        if (n < menor)
        {
            menor = n;
        }
        
        num = n;
    } while (num >= 0);
    
    printf("Maior numero digitado: %d\nMenor numero digitado: %d", maior, menor);
    return 0;

}