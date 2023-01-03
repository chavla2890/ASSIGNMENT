#include<stdio.h>
#include<string.h>
struct student
{
    int roll;
    char name[100];
    float cgpa;
};

int main(){

struct student s1;
s1.roll=1;
strcpy(s1.name,"Aakash Chavla");
s1.cgpa=6.28;

printf("roll no. is %d\n", s1.roll); 
printf("name is %s\n",s1.name);
printf("cgpa is %f\n",s1.cgpa);

return 0;
}
