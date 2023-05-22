/*
5. Faça um algoritmo que leia um número positivo e imprima seus divisores. Exemplo:
Os divisores do número 66 são: 1, 2, 3, 6, 11, 22, 33 e 66
*/

#include <stdio.h>

int main(){

    int n=0;

    do
    {
        printf("Digite um numero positivo: ");
        scanf("%d", &n);
    } while (n<0);

    for (int i = 1; i < n/2; i++)
    {
        printf("\n%d", n/2);
        n = n/2;
    }
    
    return 0;
}