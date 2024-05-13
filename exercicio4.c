#include <stdio.h>
#include <stdlib.h>

int main()
{
    double salario, novosalario
    ;
    int tempo;
    printf("Descubra sua bonificacao de salario\n");
    printf("Digite seu salario atual: ");
    scanf("%d",&salario);
    printf("Digite o seu tempo de contribuicao em anos: ");
    scanf("%d",&tempo);

    if(tempo >= 5)
    {
        novosalario = (0.20 * salario) + salario;
        printf("O seu novo salario sera de %d", novosalario);
    }
    else
    {
        novosalario = (0.10 * salario) + salario;
        printf("O seu novo salario sera de %d", novosalario);
    }
    return 0;
}
