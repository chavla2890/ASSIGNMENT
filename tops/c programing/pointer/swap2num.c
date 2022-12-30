#include<stdio.h>
int main(){
    int x=3;
    int y=6;
    printf("call by value \n");
    swap(x,y);
 printf("x is :- %d and y is :- %d \n",x,y);
printf("call by refference \n");
 _swap(&x,&y);
  printf("x is :- %d and y is :- %d \n",x,y);
    return 0;
}
// call by value
void swap(int a, int b){
int temp=a;
    a=b;
    b=temp;
       printf("a is :- %d and b is :- %d \n",a,b);
}

// call by refference

void _swap(int*a, int*b){
int temp=*a;
*a=*b;
*b = temp;
 printf("a is :- %d and b is :- %d \n",*a,*b);
}