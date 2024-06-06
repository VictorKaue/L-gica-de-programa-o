// Implemente um programa que leia uma string (nome)
// e exiba o comprimento da string (número de caracteres)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    char nome[10] = "ola mundo";
    printf("A string tem %d caracteres.", strlen(nome));
}