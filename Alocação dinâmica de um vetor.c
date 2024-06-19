#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL,"Portuguese");
    int tamanho,i;

    printf("Digite o tamanho do array: ");
    scanf("%d", &tamanho);

    // Aloca dinamicamente o array aqui
    int *arr = malloc(tamanho*sizeof(int));
    // Inicializa os elementos do array aqui
    for (i = 0; i < tamanho; i++)
    {
        printf("Digite o número da %dª posição: ", i+1);
        scanf("%d", &arr[i]);
    }
    
    // Imprime os elementos do array aqui
    for (i = 0; i < tamanho; i++)
    {
        printf("arr[%d] = %d\n",i,arr[i]);
    }
    // Libera a memória alocada aqui
    free(arr);
    return 0;
}
