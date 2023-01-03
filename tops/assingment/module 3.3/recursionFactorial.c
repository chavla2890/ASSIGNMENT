#include<stdio.h>
int factorial(int n);
int main(){
int n;
printf("\nEnter number to find factorial of the number :- \n");
scanf("%d",&n);
printf("Factorial is :- %d \n",factorial(n));
return 0;
}
int factorial(int n){
    if (n==1)
    {
        return 1;
    }
    
    int fact = factorial(n-1);
    int facto = fact * n;
    return facto;
}