#include<stdio.h>

float convertTemp(float celsius);

int main(){
int celsius;
printf("Enter  the temp in celsius to convert in faraniet :- ");
scanf("%d",&celsius);
printf("far is :- %f",convertTemp(celsius));

    return 0;
}

float convertTemp(float celsius){
    float far = celsius*(9.0/5.0)+32;
    return  far;
}