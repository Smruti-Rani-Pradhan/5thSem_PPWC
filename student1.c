#include<stdlib.h>
#include <stdio.h>
#include <string.h>
typedef struct student{
int regdno;
int marks;
double cgpa;
char name[20];
}s;
void main(){
// struct student s1;
s s1;
s1.regdno=1;
s1.cgpa=9.95;
s1.marks=90;
strcpy(s1.name,"Smruti");
// s1.name="Smruti";
 s s2={2,98,9.55,"Sm"};
printf("%.2lf ",s2.cgpa);

}