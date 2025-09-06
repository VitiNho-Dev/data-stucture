/*
    Exercício 1

    Crie um vetor de inteiros ( int ) de 10 posições. Preencha-o
    com os valores 10 , 20 , 30 , 40 , 50 , 60 , 70 , 80 , 90 e
    100 . Use um for para exibir os valores deste vetor.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int numbers[10];

    numbers[0] = 10;
    numbers[1] = 20;
    numbers[2] = 30;
    numbers[3] = 40;
    numbers[4] = 50;
    numbers[5] = 60;
    numbers[6] = 70;
    numbers[7] = 80;
    numbers[8] = 90;
    numbers[9] = 100;

    for (int i = 0; i < 10; i++)
    {
        printf("Number: %d \n", numbers[i]);
    }
}
