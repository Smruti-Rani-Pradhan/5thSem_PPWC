#include<stdlib.h>
#include <stdio.h>
struct student{
int regdno;
int marks;
int cgpa;
char name[20];
};
void main(){
struct student s1;
s1.regdno=1;
s1.cgpa=9.95;
s1.marks=90;
strcpy(s1.name,"Smruti");
struct student s2={2,98.9,"Sm",9.55};

}