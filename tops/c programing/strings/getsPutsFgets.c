#include<stdio.h>
int main(){
    char name[100],add[100];
    printf("enter your name :- ");
    fgets(name,100,stdin);
    printf("\nenter your address :- ");
    gets(add);
    printf("\nyour name is :- ");
    puts(name);
    printf("your address is :- ");
    puts(add);
    

    return 0;
}