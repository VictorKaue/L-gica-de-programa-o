#include <stdio.h>
#include <stdlib.h>

void imprima(int *vetor, int n){
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Vetor[%d]: %d\n",i , vetor[i]);
    }
}

int main(){
    int vetor[] = {1,2,3,4,5};
    int tamanho = sizeof(vetor)/sizeof(vetor[0]);
    imprima(vetor, tamanho);

    return 0;
}
