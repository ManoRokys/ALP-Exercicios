#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int cod;

    printf("Descubra a categoria do produto pelo seu c�digo\n");
    printf("Digite o c�digo: ");
    scanf("%d",&cod);
    switch(cod){
    case 1:
        printf("esse � um Alimento N�o-perec�vel");
        break;
    case 2:
        printf("esse � um Alimento perec�vel");
        break;
    case 3:
        printf("esse � um Alimento perec�vel");
        break;
    case 4:
        printf("esse � um Alimento perec�vel");
        break;
    case 5:
        printf("esse � um Vestu�rio");
        break;
    case 6:
        printf("esse � um Vestu�rio");
        break;
    case 7:
        printf("esse � um produto de higiene pessoal");
        break;
    case 8:
        printf("esse � um utens�lio dom�stico");
        break;
    case 9:
        printf("esse � um utens�lio dom�stico");
        break;
    case 10:
        printf("esse � um utens�lio dom�stico");
        break;

    default:
        printf("C�digo inv�lido");
        break;
    }
    return 0;
}
