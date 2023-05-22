/*
9. Elabore um algoritmo que permita ao usuário realizar a compra de frutas. Assim,
apresente a lista de frutas disponíveis, abaixo, com seus respectivos valores. O algoritmo
deve permitir ao usuário retomar o menu frutas quantas vezes quiser, e solicitar a quantidade
de frutas. Ao final, apresente o valor total da compra.

1 => ABACAXI – 5,00 a unidade
2 => MAÇA – 1,00 a unidade
3 => PERA – 4,00 a unidade

*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float somaMaca, somaAbacaxi, somaPera;
    int opFruta;


    do
    {
        printf("\n\nSelecione o produto:\n\n1 => ABACAXI: 5.00 a unidade\n2 => MACA: 1.00 a unidade\n3 => PERA: 4.00 a unidade\n");
        scanf("%d", &opFruta);

        somaMaca=0;
        somaAbacaxi=0;
        somaPera=0;

        switch (opFruta)
        {
        case 1:
            somaAbacaxi = somaAbacaxi + 5.0;
            break;
        case 2:
            somaMaca = somaMaca + 1.0;
            break;
        case 3:
            somaPera = somaPera + 4.0;
            break;
        default:
            break;
        }

        system("cls");

        printf("Presione [0] para sair.");

        printf("\n\nTotal de compra: ABACAXI: %d, MACA: %d. PERA: %d", somaAbacaxi, somaMaca, somaPera);

    } while (opFruta != 0);
    

    return(0);
}