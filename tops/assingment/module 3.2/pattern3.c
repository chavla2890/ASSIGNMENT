#include<stdio.h>
int main(){
    int ch=1;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",ch++);
        }
        printf("\n");
    }
}