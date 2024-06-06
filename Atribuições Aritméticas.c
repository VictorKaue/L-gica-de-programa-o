// Escreva um programa que calcule o quadrado de um número
// usando atribuição aritmética.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1, num2;

    printf("digite um numero: ");
    scanf("%d", &num1);
    num2 = num1*num1;
    printf("O quadrado desse numero e: %d", num2);

}