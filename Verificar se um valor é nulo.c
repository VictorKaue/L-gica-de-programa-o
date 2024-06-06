// Crie uma função que receba um valor e
// informe se ele é positivo ou não.

#include <stdio.h>
#include <stdlib.h>

void postivo(int num){
    if (num>0)
    {
        printf("Positivo!");
    } else{
        printf("Nao e positivo");
    }
}


int main(){
    int n1;
    printf("Digite um numero: ");
    scanf("%d", &n1);
    postivo(n1);

    return 0;
}
