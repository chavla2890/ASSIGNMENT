#include<stdio.h>


int main(){
    int n;
    printf("enter the number to find the square of the number :- ");
    scanf("%d",&n);
    square(n);
    printf("\nn is :-  %d",n);

    _square(&n);
    printf("\nn is :-  %d",n);
    return 0;
}
//call by value
void square(int n){
n= n * n;
printf("\nsquare is :- %d",n);
}

// call bt reffernce  

void _square(int *n){
    *n = (*n ) * (*n);
    printf("\nsquare is :- %d",*n);
}