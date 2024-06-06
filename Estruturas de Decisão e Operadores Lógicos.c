// Implemente um programa que
// determine se um ano é bissexto ou não.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int ano;
    printf("digite um ano: ");
    scanf("%d", &ano);
    if (ano%4 == 0)
    {
        printf("O ano e bissexto");
    } else{
        printf("O ano não e bissexto");
    }
    return 0;
}