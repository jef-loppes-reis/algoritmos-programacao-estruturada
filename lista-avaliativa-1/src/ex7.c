/*
7. Escreva um programa que leia um número inteiro, maior ou igual a zero, do usuário.
Imprima o enésimo termo da sequência de Fibonacci. Essa sequência começa no termo de
ordem zero, e, a partir do segundo termo, seu valor é dado pela soma dos dois termos
anteriores. Alguns termos dessa sequência são: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34

Fn = fn-1 + Fn-2
*/

#include <stdio.h>

int main(){

    int n, nAnterior, nPosterior, result=0;

    do
    {
        printf("Digite um numero inteiro, maior ou igual a zero: ");
        scanf("%d", &n);
    } while (n <= 0);
    
    for (int i = 0; i < n; i++)
    {
        /*Fn = fn-1 + Fn-2*/
        /*i = i-nAnterior + i-nPosterior*/
        nAnterior = i;
        nPosterior = i+nAnterior;

        printf("\n%d", nPosterior);
    }
    

}