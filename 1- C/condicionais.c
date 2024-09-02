                                // Condicionais em C
#include <cs50.h>
#include <stdio.h>

void condi_1(void);
void condi_2(void);
void condi_3(void);

int x;
int y;

int main(void)
{
    string answer = get_string("Qual seu nome? "); // Declarando variável do tipo string
    printf("Hello, %s\n", answer); /* Função de imprimir mensagem na tela, com os caracteres de formatação %s -> (place holder), \n( -> (pular nova linha)*/
}

// Condicionais
void condi_1(void)
{
    if (y < x)
    {
        printf("y é menor que x\n");
    }
    else
    {
        printf("y não é menor que x\n");
    }
}

// Condicionais encadeadas
void condi_2(void)
{
    if (x < y)
    {
        printf("x é menor que y\n");
    }
    else if (x > y)
    {
        printf("x é maior a y\n");
    }
    else if (x == y)
    {
        printf("x é igual que y\n");
    }
}


// Or, we can do this of another way:

void condi_3(void)
{
    if (x < y)
    {
        printf("x é menor que y\n");
    }
    else if (x > y)
    {
        printf("x é maior que y\n");
    }
    else // Desta forma, o programa fez uma verificação a menos, do que o programa acima.
    {
        printf("x é igual a y\n");
    }
}



// Declarando Variáveis

int counter = 0; // Do tipo int.

