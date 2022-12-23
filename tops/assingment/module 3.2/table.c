#include<stdio.h>
int main(){
    int a;
    printf("enetr number to print table of that number :- ");
    scanf("%d",&a);
    for(int i=1;i<=10;i++){
        printf("%d*%d=%d \n", a, i, a*i);
    }
}