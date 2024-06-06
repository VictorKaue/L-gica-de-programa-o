#include <stdio.h>

float maior(float x, float y);

int main(){
    float x, y, m;

    puts("digite um valor: ");
    scanf("%f", &x);

    puts("digite um valor: ");
    scanf("%f", &y);

    m = maior(x,y);

    printf("Maior %.2f", m);
}

float maior(float x, float y){
    if(x>y){
        return x;
    } else{
        return y;
    }
}