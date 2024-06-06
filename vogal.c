// Implemente um programa que leia uma frase (string) e conte
// quantas vogais (a, e, i, o, u) ela possui.


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char texto[1000];
    int quantidade_vogal = 0;

    printf("Digite um texto: ");
    fgets(texto, sizeof(texto), stdin);

    for (int i = 0; i < (int) strlen(texto); i++)
    {
        if (texto[i] == 'a' || texto[i] == 'e' || texto[i] == 'i' || texto[i] == 'o' || texto[i] == 'u' || texto[i] == 'A' || texto[i] == 'E' || texto[i] == 'I' || texto[i] == 'O' || texto[i] == 'U')
        {
            quantidade_vogal++;
        }
        
    }
    
    printf("A frase contem %d vogais \n", quantidade_vogal);
}
