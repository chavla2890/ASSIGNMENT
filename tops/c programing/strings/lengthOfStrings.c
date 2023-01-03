#include<stdio.h>
#include<string.h>
int main(){
    char  name[100];
    printf("\n\nEnter string to find length :- ");
    gets(name);
    int lenght=countLengh(name);

    printf("length for string without inbuilt function :- %d",lenght);

    // IN BUILT FUNCTION FOR FIND THE LENGHT OF STRING 

    int length = strlen(name);
    printf("\nlenght by inbuilt fuctiion :- %d ",length);


    return 0;
}

int countLengh(char arr[]){
    int len=0;
     for(int i=0; arr[i]!='\0' ;i++){
      len++;
    }

    return len;
}