#include<stdio.h>
int main(){
    char ch;
    printf("enter a char. a to z or A to Z :- ");
    scanf("%c",&ch);

    switch (ch)
    {
    case 'a':
        printf(" the given char. '%c' is vowels",ch);
        break;
    case 'e':
        printf(" the given char. '%c' is vowels",ch);
        break;
    case 'i':
        printf(" the given char. '%c' is vowels",ch);
        break;
    case 'o':
        printf(" the given char. '%c' is vowels",ch);
        break;
    case 'u':
        printf(" the given char. '%c' is vowels",ch);
        break;
    case 'A':
        printf(" the given char. '%c' is vowels",ch);
        break;
    case 'E':
        printf(" the given char. '%c' is vowels",ch);
        break;
    case 'I':
        printf(" the given char. '%c' is vowels",ch);
        break;
    case 'O':
        printf(" the given char. '%c' is vowels",ch);
        break;
    case 'U':
        printf(" the given char. '%c' is vowels",ch);
        break;
    
    default:
        printf(" the given char. '%c' is not vowels",ch);
        break;
    }
}