// Crie uma função que receba 3 números 
// e retorne o maior valor, utilizando a 
// função da questão 4.

#include <stdio.h>  
#include <stdlib.h>  

int menor(int num1, int num2, int num3){  

    if (num1<=num2 && num1<=num3){  
        return num1;  
    } else if(num2<=num1 && num2<=num3) {  
        return num2;  
    } else { 
        return num3; 
    }  
} 

int main(){  

    int n1,n2,n3;  
    int resultado = 0; 
    printf("Digite o primeiro valor: ");  
    scanf("%d", &n1);  
    printf("Digite o segundo valor: ");  
    scanf("%d", &n2); 
    printf("Digite o terceiro valor: "); 
    scanf("%d", &n3); 
 
    if (n1 == n2 && n2 == n3){ 
        printf("Todos os numeros sao iguais!"); 
    } else { 
        resultado = menor(n1,n2,n3); 
        printf("O menor numero e: %d", resultado);  
    } 
}