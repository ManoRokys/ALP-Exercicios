#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nota1, nota2;
    double media;

    printf("Descubra a media do seu aluno\n");
    printf("Digite a primeira nota ");
    scanf("%d", &nota1);
    printf("Digite a segunda nota ");
    scanf("%d", &nota2);
    media = (nota1 + nota2) / 2;

    if(media >= 7)
    {
        printf("O seu aluno foi aprovado");
    }
    else
    {
        printf("O seu aluno foi reprovado");
    }
    return 0;
}
