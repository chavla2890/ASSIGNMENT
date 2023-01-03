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

struct student s2;
s2.roll=2;
strcpy(s2.name,"Rahul Mahto (chudna)");
s2.cgpa=2.28;

struct student s3;
s3.roll=1;
strcpy(s3.name,"Shubham ");
s3.cgpa=4.28;


printf("roll no. is %d\n", s1.roll); 
printf("name is %s\n",s1.name);
printf("cgpa is %f\n",s1.cgpa);

return 0;
}
