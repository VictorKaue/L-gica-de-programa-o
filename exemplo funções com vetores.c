#include <stdio.h>

void imprime(int vetor[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", vetor[i]);
    }
    puts("");
}

void imprime2(int vetor[10]){
    for (int i = 0; i < 10; i++)
    {
        printf("%d, ", vetor[i]);
    }
    puts("");
}

void imprime3(int *vetor, int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", vetor[i]);
    }
    puts("");
}

int main(){
    int vetor[5] = {1,2,3,4,5};
    int vetor2[10] = {1,2,3,4,5,6,7,8,9,10};
    imprime(vetor, 5);
    imprime2(vetor2);
    imprime3(vetor, 5);
    return 0;
}



