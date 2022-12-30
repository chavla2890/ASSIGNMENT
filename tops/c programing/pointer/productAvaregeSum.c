#include<stdio.h>
int main(){
    int a=4;
    int b=6;
    int average, sum, product;
    doWork(a,b, &average, &sum, &product);
    
    printf(" average is :- %d\n sum is :- %d\n product is :- %d", average, sum, product); 
    return 0;

}

void doWork(int a, int b, int *average, int *sum, int *product){
 *average=(a+b)/2;
 *sum=a+b;
 *product=a*b;

}