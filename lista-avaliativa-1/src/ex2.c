/*2. Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer
no plano, p1(x1, y1) e p2(x2, y2) e calcule a distância entre eles,
mostrando 4 casas decimais após a vírgula, segundo a fórmula:*/

#include <stdio.h>
#include <math.h>

int main(){

    float x1=0, y1=0, x2=0, y2=0;
    float p1=0, p2=0, distancia=0;

    printf("\nDigite o valor de X1: ");
    scanf("%f", &x1);
    printf("\nDigite o valor de Y1: ");
    scanf("%f", &y1);
    printf("\nDigite o valor de X2: ");
    scanf("%f", &x2);
    printf("\nDigite o valor de Y2: ");
    scanf("%f", &y2);

    p1 = pow((x2-x1),2);
    p2 = pow((y2-y1), 2);

    distancia = sqrt(p1 + p2);

    printf("\nDistancia = %f", distancia);

    return 0;
}