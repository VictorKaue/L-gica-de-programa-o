#include <stdio.h>
#include <stdlib.h>

int main(){
    // int a = 20;
    // int b = 10;
    // int c;
    // int *p1 = NULL;
    // printf("%p\n", &p1);
    // int *p2;
    // p1 = &a;
    // p2 = p1;
    // c = a+b;
    // printf("&a = %p a = %d\n", &a, a);
    // printf("&b = %p b = %d\n", &b, b);
    // printf("&c = %p c = %d\n", &c, c);
    // printf("%p\n", &p1);
    // printf("%p\n", p2);

    int a,b,*p1,*p2;
    a=4;
    b=3;
    p1=&a;
    p2=p1;
    *p2 = *p1+3;
    b=b*(*p1);
    (*p2)++;
    p1 = &b;
    printf("%d\n", *p1);
    printf("%p\n", p1);  
    printf("%p\n", &p1);    


    return 0;


}