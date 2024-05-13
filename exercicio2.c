#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;

    printf("Digite sua idade ");
    scanf("%d",&idade);

    if (idade >= 18)
    {
        printf("Voce eh maior de idade");
    }
    else
    {
        printf("Voce ainda eh menor de idade");
    }
    return 0;
}
