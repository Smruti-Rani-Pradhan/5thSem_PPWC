#include <stdio.h>
int main(){
    int z=100;
int *ptr=&z;
int **pptr=&ptr;


printf("1:%d\n",*ptr);
printf("2:%d\n",**pptr);
printf("3:%p\n",ptr);
printf("4:%p\n",pptr);
printf("5:%d\n",(**pptr)+(*ptr));
// printf("6:%d\n",(*pptr)+(*ptr));
// printf("7:%d\n",(pptr)+(*ptr));
// printf("8:%p\n",(**pptr)+(ptr));
printf("8:%p\n",(pptr)+(ptr));
return 0;
}