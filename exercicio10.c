#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale (LC_ALL,"Portuguese");
    float pe, vp, parcela;
    int cp;
    printf("Digite o preço da etiqueta:");
    scanf ("%f",&pe);
    printf("Digite o código de condição:");
    scanf("%d",&cp);

    switch(cp){
        case 1:
            vp = pe * 0.90;
            printf("O valor final a ser pago será R$%.2f\n",vp);
            break;
        case 2:
            vp = pe * 0.95;
            printf("O valor final a ser pago será R$%.2f\n",vp);
            break;
        case 3:
            vp = pe;
            parcela = vp / 2;
            printf("O valor final a ser pago será R$%.2f e o valor de cada parcela será R$%.2f\n",vp ,parcela);
            break;
        case 4:
            vp = pe * 1.10;
            parcela = vp / 3;
            printf("O valor final a ser pago será R$%.2f e o valor de cada parcela será R$%.2f\n",vp ,parcela);
            break;
        default:
            printf("Código inválido!!!!");
            break;
    }

}
