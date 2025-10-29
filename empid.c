#include<stdlib.h>
#include <stdio.h>
#include <string.h>
typedef struct{
int empid;
float salary;
char name[20];
}emp;
void main(){
// struct student s1;
emp e1={1234,1223.34,"Alice"};
emp *ptr1= &e1;
printf("emp id: %d \n",(*ptr1).empid);
printf("emp id: %.2f ",ptr1->salary);

}