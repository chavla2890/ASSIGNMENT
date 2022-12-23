#include<stdio.h>
int main(){
int a;
printf("enetr numbers :- ");
scanf("%d",&a);
char ch;
scanf("%c",&ch);
int b;
scanf("%d",&b);
switch (ch)
{
case '+':{
    printf("answer is %d",a+b);
    break;
    }
case '-':{
    printf("answer is %d",a-b);
    break;
}
case '*':{
    printf("answer is %d",a*b);
    break;
}
case '/':{
    printf("answer is %d",a/b);
    break;
}
case '%':{
    printf("answer is %d",a%b);
    break;
}
default:{
    printf("enter valid char");
    break;
}
}
return 0;
}
