#include<stdio.h>
int main(){
    int a, b=1;
    printf("enter a number :- ");
    scanf("%d",&a);
     for(int i=1;i<=a;i++){
        b=b*i;
     }
    printf("factorial is :- %d",b);
}