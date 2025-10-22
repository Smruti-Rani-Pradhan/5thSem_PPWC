#include<stdlib.h>
#include <stdio.h>
void main(){
int n,i,*arr,sum=0;
printf("enter value :\n");
scanf("%d",&n);
arr=(int*)malloc(n* sizeof(int));
printf("enter elements: \n");
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    sum+=arr[i];
}
printf("Sum is :%d",sum);
// if(ptr==NULL){
//     printf("Allocation failed !");
// }

// *ptr=9;
// printf("%d\n",*ptr);
}