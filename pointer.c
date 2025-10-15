#include <stdio.h>
int main(){
//     int a=15,b=34,c=56;
// int *ptr[3];
// ptr[0]=&a;
// ptr[1]=&b;
// ptr[2]=&c;

// for(int i=0;i<3;i++){
// printf("Value: %d and address : %p \n",*ptr[i],ptr[i]);
// }
char *st_list[4]={"Naren","Smruti","rahul","Aku"};
for(int i=0;i<4;i++){
printf("Names: %s \n",st_list[i]);
printf("Names: %u \n",*st_list[i]);
// printf("Names: %s \n",*st_list);
printf("Names: %s \n",*st_list);
printf("Names: %p \n",st_list);
}
return 0;
}