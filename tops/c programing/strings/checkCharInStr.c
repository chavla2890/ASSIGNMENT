#include<stdio.h>
#include<string.h>
int main(){
char str[100]="hewwwlowwworwwlwd";
char ch='w';
checkCharInStr(str, ch);

    return 0;
}

void checkCharInStr(char str[], char ch){
    int count = 0;
for(int i=0; str[i]!='\0'; i++){
if(str[i]==ch){
    count++;
}
}

if(count!=0){
    printf("Yes given char %c is present in given str %d time",ch,count);
}else{
    printf("char is not present");
}

}
