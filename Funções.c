

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//função sem retorno e sem parâmetros.
void sayhello1(void){
    puts("Hello.");
}

//função sem retorno e com parâmetros.
void sayhello2(char algo[50]){
    printf("%s", algo);
}
//função com retorno e sem parâmetros.
int soma(void){
    return 1+1;
}

//função com retorno e com parâmetros.
int soma2(int num1, int num2){
    return num1 + num2;
}

int main(){
    int resultado = soma2(8,7);
    printf("%d\n", resultado);

    return 0;
}


