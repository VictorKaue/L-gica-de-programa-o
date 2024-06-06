// Definir uma struct para representar um ponto em
// um plano cartesiano e uma função que recebe um ponto e
// retorna a distância desse ponto à origem.

#include <stdio.h>
#include <math.h>

struct Ponto
{
    float x;
    float y;
}; typedef struct Ponto ponto;

float distancia(ponto pontos){
    return sqrt(pontos.x*pontos.x + pontos.y*pontos.y);
}

int main(){
    ponto pontos;
    
    printf("Digite o primeiro numero: ");
    scanf("%f", &pontos.x);
    printf("Digite o primeiro numero: ");
    scanf("%f", &pontos.y);

    float resultado = distancia(pontos);
    printf("A distancia entre os pontos e de: %.2f", resultado);
    return 0;
}
