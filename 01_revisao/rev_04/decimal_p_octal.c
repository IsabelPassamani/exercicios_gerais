#include <stdio.h>
#define CONST 8
#define MAX 99999

typedef struct
{
    int n;
    int lista[MAX];
} tAlgarismos;

int achaRestoDaDivisao(int a)
{
    int divisao;
    divisao = a % CONST;
    return divisao;
}

tAlgarismos retornaNumeroOctagonal(int a)
{
    int i = 0, div = a;
    tAlgarismos algarismos;
    algarismos.n = 0;
    while (div > 0)
    {
        algarismos.lista[i] = achaRestoDaDivisao(div);
        div /= CONST;
        algarismos.n++;
        i++;
    }
    return algarismos;
}

void printaNumeroOctagonal(tAlgarismos algarismos)
{
    int i;
    for (i = algarismos.n - 1; i >= 0; i--)
    {
        printf("%d", algarismos.lista[i]);
    }
}

int main()
{
    int decimal;
    tAlgarismos octagonal;

    scanf("%d", &decimal);
    octagonal = retornaNumeroOctagonal(decimal);

    printaNumeroOctagonal(octagonal);
}