#include<stdio.h>
int main(){
    int a, b, c;
    printf("enter A even number :- ");
    scanf("%d",&a);
     if(a%2!=0){
        a++;
    }
    b=a/2;
    c=b*3;
   

     for(int i=0;i<=a;i++){
        for(int j=0;j<=a;j++){
            if(i+j==b||j-i==b||i-j==b||j+i==c){
                printf("*");
            }else{
                printf(" ");
            }
        
    }
    printf("\n");
}

}