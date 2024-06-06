// Crie uma função que receba três
// valores, 'a', 'b' e 'c', que são os
// coeficientes de uma equação do segundo
// grau, e retorne o valor do delta, dado por Delta = b^2 - 4ac.

#include <stdio.h>
#include <stdlib.h>

int delta(int a, int b, int c){
    return b*b-4*a*c;
}


int main(){
    int n1,n2,n3;
    printf("Digite o valor de (a):");
    scanf("%d", &n1);
    printf("Digite o valor de (b):");
    scanf("%d", &n2);
    printf("Digite o valor de (c):");
    scanf("%d", &n3);
    int resultado = delta(n1,n2,n3);
    printf("%d", resultado);
    return 0;
}


