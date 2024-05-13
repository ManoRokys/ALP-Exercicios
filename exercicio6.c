#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int cod;

    printf("Descubra a categoria do produto pelo seu código\n");
    printf("Digite o código: ");
    scanf("%d",&cod);
    switch(cod){
    case 1:
        printf("esse é um Alimento Não-perecível");
        break;
    case 2:
        printf("esse é um Alimento perecível");
        break;
    case 3:
        printf("esse é um Alimento perecível");
        break;
    case 4:
        printf("esse é um Alimento perecível");
        break;
    case 5:
        printf("esse é um Vestuário");
        break;
    case 6:
        printf("esse é um Vestuário");
        break;
    case 7:
        printf("esse é um produto de higiene pessoal");
        break;
    case 8:
        printf("esse é um utensílio doméstico");
        break;
    case 9:
        printf("esse é um utensílio doméstico");
        break;
    case 10:
        printf("esse é um utensílio doméstico");
        break;

    default:
        printf("Código inválido");
        break;
    }
    return 0;
}
