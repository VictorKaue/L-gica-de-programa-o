// Implemente um programa que leia números do usuário até que ele digite 0, e
// então imprima a soma de todos os números digitados.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int num=100, soma=0;
    puts("Digite 0 para parar o programa");
    do
    {
        puts("digite o valor a ser somado: ");
        scanf("%d", num);
    } while (num!=0);
}