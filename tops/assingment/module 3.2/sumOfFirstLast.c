#include<stdio.h>
int main(){
    int num, lastNum, firstNum;
    printf("enter a number :- ");
    scanf("%d",&num);
    lastNum=num%10;
    while (num >=10 )
    {
        num /= 10;
    }
    firstNum = num;
    // printf("%d \n", lastNum);
    // printf("%d \n", firstNum);
    printf("Sum of first and last digit is :-  %d",lastNum+firstNum);
}