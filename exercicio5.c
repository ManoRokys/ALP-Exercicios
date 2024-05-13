#include <stdio.h>
#include <stdlib.h>

int main()
{
    double valoremprestimo, valorparcela, salario;
    int quantparcela;

    printf("Descubra se voce tem o direito ao emprestimo\n");
    printf("Digite o valor do emprestimo que voce deseja: ");
    scanf("%d",&valoremprestimo);
    printf("Digite a quantidade de parcelas que ira pagar esse emprestimo: ");
    scanf("%d",&quantparcela);
    printf("Digite o seu salario atual: ");
    scanf("%d",&salario);
    valorparcela = valoremprestimo / quantparcela;

    if (valorparcela <= (salario*0.30))
    {
        printf("O seu emprestimo foi aprovado!");
    }
    else
    {
        printf("O seu emprestimo foi recusado!");
    }

    return 0;
}
