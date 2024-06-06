// Definir uma struct para representar um retângulo e  
// uma função que calcula sua área.  
#include <stdio.h> 
struct Area{  
    float altura;  
    float base;  
}; typedef struct Area area;  

float total(struct Area retangulos){
    return retangulos.altura*retangulos.base; 
} 
int main(){  
    area retangulos;  
    printf("Digite o valor da altura: "); 
    scanf("%f", &retangulos.altura); 
    printf("Digite o valor da base: "); 
    scanf("%f", &retangulos.base); 
    float resultado = total(retangulos); 
    printf("A area do triangulo e de: %.2f", resultado); 
    return 0; 
}