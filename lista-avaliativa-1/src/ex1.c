/*1. Leia quatro valores inteiros A, B, C e D. A seguir, calcule e mostre a diferença do
produto de A e B pelo produto de C e D segundo a fórmula: 

DIFERENCA = (A * B - C * D).

Apresente o resultado da seguinte forma:

DIFERENCA = (“valor de A” * “valor de B” - ““valor de C” * ““valor de D”)
DIFERENCA = (“valor de DIFERENCA”)*/

#include <stdio.h>

int main(){

    int a=0, b=0, c=0, d=0, diferenca=0;

    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("\nDigite o valor de B: ");
    scanf("%d", &b);
    printf("\nDigite o valor de C: ");
    scanf("%d", &c);
    printf("\nDigite o valor de D: ");
    scanf("%d", &d);

    diferenca = (a*b) - (c*d);

    printf("\nValor de A=%d * Valor de B=%d - Valor de C=%d * Valor de D=%d", a,b,c,d);
    printf("\nValor de DIFERENCA: %d", diferenca);

    return 0;
}