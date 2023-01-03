#include<stdio.h>
int main(){
char str[100]="helloWorld";
int n=3, m=6;
printf("\n");
slice(str, n, m);

}

void slice(char str[], int n ,int m){
    char newStr[100];
    int j=0;
    for(int i=n;i<=m;i++,j++){
     newStr[j]=str[i];   
    }
    newStr[j]='\0';
    puts(newStr);
}