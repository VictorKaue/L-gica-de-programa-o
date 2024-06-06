// Crie um programa que leia um número inteiro e imprima a tabuada desse número.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int num=0;
    printf("digite um numero: ");
    scanf("%d", &num);

    for (int i = 1; i <= 10; i++)
    {
        printf ("%d x %d = %d",num, i, num*i);
    }
    
}