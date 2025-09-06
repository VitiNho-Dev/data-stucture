/*
    Exercício 3

    Faça um programa com um vetor com 10 elementos inteiros
    positivos (aleatórios e de sua escolha). Permita que seja solicitado
    um determinado valor inteiro e positivo para ser procurado neste
    vetor. Caso exista, o programa deve exibir o índice no qual o valor
    está posicionado. Caso contrário, o programa deve informar que o
    elemento não existe no vetor.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int inteiros[10];
    int number;

    inteiros[0] = 10;
    inteiros[1] = 20;
    inteiros[2] = 30;
    inteiros[3] = 40;
    inteiros[4] = 50;
    inteiros[5] = 60;
    inteiros[6] = 70;
    inteiros[7] = 80;
    inteiros[8] = 90;
    inteiros[9] = 100;

    printf("Digite um número: ");
    scanf("%d", &number);

    int posicao = 0;
    for (int i = 0; i < 10; i++)
    {
        if (number == inteiros[i])
        {
            printf("O número %d está na posição: %d(índice %d) do vetor. \n",
                   inteiros[i], posicao + 1, i);
            break;
        }
        posicao++;
    }

    if (posicao == 10)
    {
        printf("O número %d não existe no vetor!\n", number);
    }

    return 0;
}
