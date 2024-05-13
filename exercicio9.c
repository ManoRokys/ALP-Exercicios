#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale (LC_ALL,"Portuguese");
    int he, me, hs, ms, total_tempo;
    double minutos;
    float valor;

    printf("Descubra o valor a ser pago no estacionamento\n");
    printf("Digite a hora de entrada:");
    scanf ("%d",&he);
    printf("Digite os minutos da entrada:");
    scanf ("%d",&me);
    printf("Digite a hora de saída:");
    scanf("%d",&hs);
    printf("Digite os minutos da saída:");
    scanf("%d",&ms);
    minutos = (ms - me);
    total_tempo = hs - he ;


    if (total_tempo == 1 && minutos == 0){
        valor = 4.0;
        printf("O tempo total foi %d hora(s) e o valor a ser pago é de R$%.2f\n",total_tempo ,valor);
    }
    else if (total_tempo == 1 && minutos > 0){
        total_tempo ++;
        valor = 4.0 + 2;
        printf("O tempo total foi %d hora(s) e o valor a ser pago é de R$%.2f\n",total_tempo ,valor);
    }
    else if(total_tempo == 2 && minutos == 0){
        valor = 6.0;
        printf("O tempo total foi %d hora(s) e o valor a ser pago é de R$%.2f\n", total_tempo, valor);
    }
    else if(total_tempo == 2 && minutos > 0){
        total_tempo ++;
        valor = 6.0 + 1;
        printf("O tempo total foi %d hora(s) e o valor a ser pago é de R$%.2f\n", total_tempo, valor);
    }
    else if(total_tempo > 2 && minutos == 0){
        valor = 6.0 +((total_tempo - 2)*1);
        printf("O tempo total foi %d hora(s) e o valor a ser pago é de R$%.2f\n", total_tempo, valor);
    }
    else if(total_tempo > 2 && minutos > 0){
        total_tempo ++;
        valor = 6.0 +((total_tempo - 2)*1);
        printf("O tempo total foi %d hora(s) e o valor a ser pago é de R$%.2f\n", total_tempo, valor);
    }
}
