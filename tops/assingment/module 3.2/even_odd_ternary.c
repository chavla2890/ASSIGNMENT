#include<stdio.h>
int main(){
    int a;
    printf("enter number to check even or odd :-");
    scanf("%d",&a);

    (a%2==0) ? printf("%d is even",a) : printf("%d is odd",a);
    return 0;
}