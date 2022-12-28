#include<stdio.h>
int main(){
    int num, large=0, temp;
    printf("enter a digit to fing greater amoung the digit :- ");
    scanf("%d",&num);
    if(num<0){
        num=(-1)*num;
    }

    while (num != 0)
    {
        temp = num%10;
    if(large <= temp ){
        large=temp;
    }
    num /= 10;
    }

    printf("the largest number among the digit is :- %d",large);
    return 0;
}