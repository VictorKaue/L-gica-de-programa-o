// Escreva um programa que imprima todos os números pares de 0 até 100.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int num =0;

    while (num<=100)
    {
        printf("%d", num);
        num += 2;
    }
}