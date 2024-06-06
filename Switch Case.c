// Desenvolva um programa que leia um número de 1 a 7 e imprima o dia
// da semana correspondente, sendo 1 para Domingo

#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    switch (num)
    {
    case 1:
        puts("O dia corresponde ao domingo");
        break;
    case 2:
        puts("O dia corresponde a segunda-feira");
        break;
    case 3:
        puts("O dia corresponde a terça-feira");
        break;
    
    case 4:
        puts("O dia corresponde a quarta-feira");
        break;
    
    case 5:
        puts("O dia corresponde ao quinta-feira");
        break;
    case 6:
        puts("O dia corresponde ao sexta-feira");
        break;
        
    default:
        puts("O dia corresponde ao sabado");
        break;
    }
}