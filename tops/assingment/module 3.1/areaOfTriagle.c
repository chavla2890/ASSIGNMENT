#include<stdio.h>
int main(){
    int height, base;
    printf("enter the height of triangle :- ");
    scanf("%d",&height);
    printf("enter the base of triangle :- ");
    scanf("%d",&base);

    float area;
    area=height*base/2;
    printf("area of triangle is :- %f ",area);

    }
