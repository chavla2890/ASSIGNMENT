#include<stdio.h>
int main(){
    int a=5;
    int *ptr=&a;

    int **pptr=&ptr;
    
    printf("a :- %d", **pptr);
    return 0;
}