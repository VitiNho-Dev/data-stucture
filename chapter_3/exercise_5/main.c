/*
    Exercício 5

    Faça um programa com uma matriz 5x5 de inteiros
    positivos ou negativos (aleatórios e de sua escolha) e encontre e
    exiba o maior elemento desta matriz.
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int numbers[5][5];

    int highestValue = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            numbers[i][j] = (rand() % 100) + 1;
            printf("%d ", numbers[i][j]);

            if (highestValue < numbers[i][j])
            {
                highestValue = numbers[i][j];
            }
        }
        putchar('\n');
    }

    printf("O elemento com maior valor da matriz é: %d\n", highestValue);

    return 0;
}
