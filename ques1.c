//single comment
/*Multiline comment*/
#include<stdio.h> //macro definition
#define value 10; //user identifier prototype definition
int add(int a,int b);
int main(void){
int num1=5;
int num2=value; //variable initialized with macro
int result=add(num1,num2);
printf("Total is:%d\n",result);///%d used as placeholder for int
return 0;
}
int add(int a,int b){
return a+b;
}
