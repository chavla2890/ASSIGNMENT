#include<stdio.h>
void sum();
int main(){
sum();
return 0;
}

void sum(){
    int a, b;
    printf("enter two number :- ");
    scanf("%d %d",&a, &b);
    int sum=a+b;
    printf("the sum of two number is :- %d",sum);
}