#include<stdio.h>
int main()
{
    int num1,num2;
    printf("enter any two number  :");
    scanf("%d %d",&num1,&num2);
    
    num1=num1-num2;
    
    num2=num1+num2;
    
    num1=num2-num1;
    
    printf("afterswaping num1 = %d %d\n",num1,num2);
     printf("afterswaping num2 = %d %d\n",num2,num1);
    
return 0;
}