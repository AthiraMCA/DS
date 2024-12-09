#include<stdio.h>
#include<string.h>
struct Student
{
char name[50];
int id,age;
};
void main()
{
struct Student s;
strcpy(s.name,"Steeve");
s.id=135;
s.age=21;
printf("\nStudent Details:\n");
printf("\nName:%s\n",s.name);
printf("\nID:%d\n",s.id);
printf("\nAge:%d\n",s.age);
}


