// Escreva um programa que preencha um
// vetor com 10 números inteiros e depois imprima apenas os números positivos.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int vetor[10];

    for (int i = 0; i < 10; i++)
    {
        vetor[i] = rand() % 21 - 10;

    }

    puts("Estes sao os numeros positivos");
    for (int i = 0; i < 10; i++)
    {
        if (vetor[i]>0)
        {
            printf("%d \n", vetor[i]);
        }
    }
}