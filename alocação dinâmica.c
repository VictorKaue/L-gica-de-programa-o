#include <stdio.h>
#include <stdlib.h>

void imprima(int vetor[], int n){
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Vetor[%d]: %d\n",i , vetor[i]);
    }
}

void imprima2(int *vetor, int n){
    int i;
    puts("");
    for (i = 0; i < n; i++)
    {
        printf("Vetor[%d]: %d\n",i , vetor[i]);
    }
}

int main(){
    int tamanho;
    printf("Digite o tamanho:");
    scanf("%d",&tamanho);


    int *vetor = malloc(tamanho*sizeof(int));
    for (int i = 0; i < tamanho; i++)
    {
        vetor[i] = i+1;
    }
    
    imprima(vetor,tamanho);
    imprima2(vetor,tamanho);

    free(vetor);
    return 0;
}
