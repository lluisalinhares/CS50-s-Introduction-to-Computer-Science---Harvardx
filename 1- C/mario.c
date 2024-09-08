// Código do exercicio proposto para a aula de C. O programa imprime "hashes" como blocos de tijolo do jogo Mário Bros.

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Resposta do usuário. Tamanho/quantidade de blocos.
    int n;
    do
    {
        n = get_int("Size: ");
    }
    while (n < 1 || n > 8);

    // Imprimindo os blocks.
    for (int i = 0; i < n; i++) // Quantidade de linhas.
    {
        for (int d = i; d < n - 1; d++)
        {
            printf(" ");
        }

        for (int j = 0; j <= i; j++) // Quantidade de bricks.
        {
            printf("#");
        }
        printf("\n");
    }
}
