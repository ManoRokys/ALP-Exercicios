#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Descubra se o numero eh par ou impar\n");
    printf("Digite o numero: ");
    scanf("%d",&num);
    if(num % 2 == 0)
    {
        printf("Este numero eh par");
    }
    else
    {
        printf("Este numero eh impar");
    }
    return 0;
}
