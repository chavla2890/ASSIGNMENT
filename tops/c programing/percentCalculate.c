#include<stdio.h>
float percent(int sci, int math, int sans);
int main(){
    int sci, math, sans;
    printf("Enter the marks of science :- \n");
    scanf("%d",&sci);
    printf("Enter the marks of math :- \n");
    scanf("%d",&math);
    printf("Enter the marks of sans :- \n");
    scanf("%d",&sans);
    float percentage= percent(sci, math, sans);
    printf("the percentage is :- %f", percentage);

    return 0;
}

float percent(int sci, int math, int sans){
int percentage = ((sci+math+sans)/3);
return percentage;
}