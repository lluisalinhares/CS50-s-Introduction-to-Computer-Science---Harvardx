                                    // Loops

#include <stdio.h>
#include <cs50.h>

void enquanto(void);
void para(void);

int main(void)
{                            // While -- escrito fora de uma função
    int i = 3;
    while (i > 0)
    {
        printf("O loop está funcionando!\n ");
        i--;
    }

    enquanto();
    para();
}

// Um loop While dentro de uma Função
void enquanto(void)
{
    int i = 0;
    while (i < 3)
    {
        printf("meow\n ");
        i++;
    }
}

// Um loop For dentro de uma Função
void para(void)
{
    for(int i = 0; i < 3; i++)
    {
        printf("meowwww\n");
    }
}

// While e Do While:

// Exemplo de uso de um loop While
void exemplo_while(void)
{
    int n = get_int("Size: ");
    while (n < 1)
    {
        n = get_int("Size: ");
    }
}

// Para evitar a repetição das linhas 45 e 48 -- que fazem a mesma coisa -- é melhor usar o loop Do while:
void exemplo_dowhile(void)
{
    int n;
    do
    {
        n = get_int("Size: ");
    }
    while (n < 1);
}  // É possível fazer desse modo, quando se quer repetir a mensagem quando o valor é menor que 1, o cód fica menor
