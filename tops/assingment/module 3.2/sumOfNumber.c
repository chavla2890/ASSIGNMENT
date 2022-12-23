#include<stdio.h>
int main(){
    int num, temp1=0, temp;
    printf("Enter any number :- ");
    scanf("%d",&num);
    while (num!=0)
    {
        temp=num%10;
        num /= 10;
        temp1 -= temp ;
    }
    printf("Summation of given integer is :- %d ",temp1);
    return 0;
    }