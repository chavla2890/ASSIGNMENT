#include<stdio.h>
int main(){
    int n, fact=1;
    printf("enter the number to find the factorial :- ");
    scanf("%d",&n);
    int ans = factorial(n,fact);
    printf("\nthe factorial is :- %d",ans);

}
int factorial(int n, int fact){
    if(n==0){
        
        return fact;
    }
    fact *= n;
    factorial(n-1,fact);
}