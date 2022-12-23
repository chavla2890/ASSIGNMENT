#include<stdio.h>
int main(){
    int p;
    float si, r, t; 
    printf("enter principal amount :- ");
    scanf("%d",&p);
    printf("enter annual interest rate amount :- ");
    scanf("%f",&r);
    printf("enter time in months amount :- ");
    scanf("%f",&t);
    

    si=p*r*t/100;

    printf("simple interest is :- %f",si);
    

}
