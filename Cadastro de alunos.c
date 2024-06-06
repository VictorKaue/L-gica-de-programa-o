// Crie uma estrutura `Aluno` com campos como nome, idade, matrícula, e média.
// Em seguida, crie um programa que permita ao usuário cadastrar informações de
// vários alunos e depois imprima essas informações na tela

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Aluno
{
    char nome[50];
    int idade, matricula;
    float media;
}; typedef struct Aluno aluno;


int main(){
    int N;
    printf("Quantos alunos deseja informar: ");
    scanf("%d", &N);
    fflush(stdin);
    aluno pessoas[N];    
    for (int i = 0; i < N; i++)
    {
        printf("Digite o nome do aluno: \n");
        fgets(pessoas[i].nome, 50, stdin);
        fflush(stdin);
        printf("Digite a idade do aluno: \n");
        scanf("%d", &pessoas[i].idade);
        printf("Digite o numero da matricula: \n");
        scanf("%d", &pessoas[i].matricula);
        printf("Digite a media do aluno: ");
        scanf("%f", &pessoas[i].media);
        fflush(stdin);
    }
    for (int i = 0; i < N; i++)
    {
        printf("\n(---------------------------------------)\n");
        printf("Aluno: %s", pessoas[i].nome);
        printf("Idade: %d\n", pessoas[i].idade);
        printf("Matricula: %d\n", pessoas[i].matricula);
        printf("Media: %.2f\n", pessoas[i].media);
        printf("\n(---------------------------------------)\n");
    }
    
}