#include<stdio.h>
int main(){
   int number[10];
   printf("enter 10 number :- ");
   for(int i=0;i<10;i++){
    scanf("%d",&number[i]);
}
printf(" Your ten number are :- ");
for(int i=0;i<10;i++){
    printf("%d ",number[i]);
}
    int evenCounter=0, oddCounter=0, sumEven=0, sumOdd=0;
for(int i=0;i<10;i++){
        if(number[i]%2==0){
            evenCounter++;
            sumEven=sumEven+number[i];
        }else{
            oddCounter++;
            sumOdd=sumOdd+number[i];
        }
    }
    printf("\n Total even number are :- %d \n Total odd number are :- %d \n Total sum of even number is :- %d \n Total sum of odd number is :- %d",evenCounter, oddCounter, sumEven, sumOdd);
    return 0;
}