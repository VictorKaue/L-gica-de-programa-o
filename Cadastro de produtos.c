// Crie uma estrutura `Produto` com campos como nome, preço e quantidade em
// estoque. Em seguida, permita ao usuário cadastrar vários produtos e depois
// imprima essas informações na tela.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct produto{
    char nome[50];
    float preco;
    int quantidade;
};


int main(){
    int N;

    printf("Digite quantos produtos deseja cadastrar: ");
    scanf("%d", &N);
    fflush(stdin);
    struct produto produtos[N];

    for (int i = 0; i < N; i++)
    {
        printf("Digite o nome do produto: ");
        fgets(produtos[i].nome, 50, stdin);
        fflush(stdin);
        printf("Digite o preco: ");
        scanf("%f", &produtos[i].preco);
        printf("Digite a quantidade: ");
        scanf("%d", &produtos[i].quantidade);
        fflush(stdin);
    }
    for (int i = 0; i < N; i++)
    {
        printf("-----------------------------------------\n");
        printf("Nome: %s", produtos[i].nome);
        printf("Preco: %.2f\n", produtos[i].preco);
        printf("Quantidade: %d\n", produtos[i].quantidade);
        printf("-----------------------------------------\n");
    }
}

