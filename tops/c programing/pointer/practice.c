#include<stdio.h>
int main(){
    int *ptr;
    int x;
    ptr=&x;
    *ptr = 0;
    printf("value of x is :- %d \n", x);
    printf("adress of x :- %u\n", ptr);

    *ptr += 5;
    printf("\n\nvalue of x is :- %d \n", x);
    printf(" x :- %d\n", *ptr);

    (*ptr)++;
    printf("\n\nvalue of x is :- %d \n", x);
    printf("x :- %u\n", ptr);

    return 0;
}