#include<stdio.h>
int fibo(int n);

int main(){
    int n;
    printf("enter the number to find its fibo :- ");
    scanf("%d",&n);
    printf("fibo is :- %d",fibo(n));
    
 return 0;   
}

int fibo(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int fibonm1 = fibo(n-1);
    int fibonm2 = fibo(n-2);
    int fibon= fibonm1 + fibonm2;
    //printf("fib of  %d is :- %d \n",n , fibon);
    return fibon;
}