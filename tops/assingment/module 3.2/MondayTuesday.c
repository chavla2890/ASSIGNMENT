#include<stdio.h>
 int main(){
    int num;
    printf("Enter 1 to 7 to print day that asign to this :- ");
    scanf("%d",&num);
    switch (num)
    {
    case 1:
        printf("%d. Monday",num);
        break;
    case 2:
        printf("%d. Tuesday",num);
        break;
    case 3:
        printf("%d. Wednesday",num);
        break;
    case 4:
        printf("%d. Thusday",num);
        break;
    case 5:
        printf("%d. Friday",num);
        break;
    case 6:
        printf("%d. Saturday",num);
        break;
    case 7:
        printf("%d. Sunday",num);
        break;
    
    default:
        printf("%d is invalid number",num);
        break;
    }
 }