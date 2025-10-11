#include <stdio.h>

int main(void){
    int arr[4];
    float avg=0;
    int count;
    printf("Enter the numbers:");
    for(int i=0;i<sizeof(arr);i++){
        scanf("%d\n",&arr[i]);
    }

    for(int i=0;i<sizeof(arr);i++){
        int sum=avg+arr[i];
        avg=sum/sizeof(arr);
    }
    for(int i=0;i<asizeof(arr);i++){
        if(arr[i]>avg){
            count++;
        }
    }
    print("Elements greater than avg: %d\n" ,count);


}