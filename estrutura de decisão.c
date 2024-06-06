// Crie um programa que leia um número e
// diga se ele é positivo, negativo ou zero.

#include <stdio.h>

int main(){
    int num;
    puts("digite um nuemro: ");
    scanf("%d", &num);

    if (num>0)
    {
        puts("O numero e positivo!");
    } else if(num<0){
        puts("O numero e negativo!");
    } else{
        puts("O numero e nulo!");
    }
}