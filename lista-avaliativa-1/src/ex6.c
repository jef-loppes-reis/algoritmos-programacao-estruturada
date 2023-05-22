/*
6. Faça um programa que exiba a soma de todos os números naturais abaixo de 1.000
que são múltiplos de 3 ou 5.
*/

#include <stdio.h>

int main(){

    int soma=0;

    for (int i = 0; i < 1000; i++)
    {
        if (i%3 == 0){
            soma = soma + i;
        }
        else if (i%5 == 0){
            soma = soma + i;
        }
    }
    
    printf("Soma: %d", soma);

}