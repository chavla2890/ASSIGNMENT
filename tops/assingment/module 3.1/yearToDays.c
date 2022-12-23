#include<stdio.h>
int main()
{ float days, years;
printf("enter days : ");
scanf("%f" , &days);
years = days / 365;
printf("\n\n Number of years is : %f\n",years);
printf("enter year : ");
scanf("%f" , &years);
days = years* 365;
printf("\n\n Number of days is : %f",days);
return 0;
}