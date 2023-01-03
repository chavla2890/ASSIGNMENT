#include<stdio.h>
#include<string.h>
int main(){
    char pass[100];
    printf("enter your password :- ");
    fgets(pass,100,stdin);
    salting(pass);
    return 0;
}

void salting(char password[]){
    char salt[]="123";
    char newPass[200];
    strcpy(newPass,password);
    strcat(newPass,salt);
    printf("salted password is :- \n");
    puts(newPass);
}