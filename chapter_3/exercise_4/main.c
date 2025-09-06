/*
    Exercício 4

    Faça um programa com uma matriz com 9 elementos (3x3)
    reais positivos (aleatórios e de sua escolha). Calcule e exiba a soma
    dos elementos de cada linha desta matriz.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int numbers[3][3];

    numbers[0][0] = 10;
    numbers[0][1] = 20;
    numbers[0][2] = 30;

    numbers[1][0] = 40;
    numbers[1][1] = 50;
    numbers[1][2] = 60;

    numbers[2][0] = 70;
    numbers[2][1] = 80;
    numbers[2][2] = 90;

    for (int i = 0; i < 3; i++)
    {
        int total;

        for (int j = 0; j < 3; j++)
        {
            if (j == 0)
            {
                total = numbers[i][j];
            }
            else
            {
                total = total + numbers[i][j];
            }
        }

        printf("A soma da primeira linha da matriz é: %d \n", total);
    }

    return 0;
}
