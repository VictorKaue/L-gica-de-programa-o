#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define N 10

int main(){
	setlocale(LC_ALL, "portuguese");
    char senha[N];
    char confirmar_senha[N];
    int confirmacao,i;
    printf("Digite sua senha: ");
    fgets(senha, N, stdin);
    fflush(stdin);
    printf("Confirme sua senha: ");
    fgets(confirmar_senha, N, stdin);
    fflush(stdin);
    confirmacao = strcmp(senha,confirmar_senha);
    int tamanho = sizeof(senha) / sizeof(senha[0]);
    if (confirmacao == 0)
    {
        puts("As senhas são iguais");
        printf("o valor que é devolvido pela confirmação: %d", confirmacao);
    } else if (confirmacao>=1)
    {
        puts("A segunda senha é maior");
        printf("o valor que é devolvido pela confirmação: %d", confirmacao);
    } else if (confirmacao<=1)
    {
        puts("A primiera senha é maior");
        printf("o valor que é devolvido pela confirmação: %d", confirmacao);
    }

    return 0;
}
