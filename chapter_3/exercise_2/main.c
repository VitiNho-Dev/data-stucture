/*
    Exercício 2

    Crie uma matriz de caracteres ( char ) de 16 posições (4x4).
    Preencha-a com os valores a , b , c , d , e , f , g , h , i , j ,
    k , l , m , n , o e p . Use dois for para exibir os valores desta
    matriz.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    char caracters[4][4];

    caracters[0][0] = 'A';
    caracters[0][1] = 'B';
    caracters[0][2] = 'C';
    caracters[0][3] = 'D';

    caracters[1][0] = 'E';
    caracters[1][1] = 'F';
    caracters[1][2] = 'G';
    caracters[1][3] = 'H';

    caracters[2][0] = 'I';
    caracters[2][1] = 'J';
    caracters[2][2] = 'K';
    caracters[2][3] = 'L';

    caracters[3][0] = 'M';
    caracters[3][1] = 'N';
    caracters[3][2] = 'O';
    caracters[3][3] = 'P';

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%c ", caracters[i][j]);

            if (j == 3)
            {
                putchar('\n');
            }
        }
    }

    return 0;
}
