#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    struct ponto
    {
        int x;
        int y;
        char string[10];
    };

    typedef struct ponto corde;
int main(){

    corde num;
    num.x = 10;
    num.y = 20;
    printf("(%d, %d)", num.x, num.y);

    return 0;
}