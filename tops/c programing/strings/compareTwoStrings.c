#include<stdio.h>
#include<string.h>
int main(){
    char str1[]="hello";
    char str2[]="ello";

    int differ=strcmp(str1,str2);
    printf("difference is :- %d",differ);
    // if answer is 0  then the string are equal
    // if answer is 1 then str1>str2
    // if answer is -1 the str1<str2

    return 0;
}
