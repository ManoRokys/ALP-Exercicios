#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
    int lado1, lado2, lado3;

    printf("Digite o valor do primeiro lado:");
    scanf("%d",&lado1);
    printf("Digite o valor do segundo lado:");
    scanf("%d",&lado2);
    printf("Digite o valor do terceiro lado:");
    scanf("%d",&lado3);

    if ((lado1==lado2)&&(lado2==lado3)){
        printf("Seu triangulo eh equilatero");
    }
    else if((lado1!= lado2)&&(lado2!=lado3)&&(lado3!=lado1)){
        printf("O triangulo eh escaleno");
    }
    else{
        printf("O triangulo eh isoceles");
    }
}
