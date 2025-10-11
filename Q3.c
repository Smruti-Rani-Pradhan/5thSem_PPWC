#include <stdio.h>
int main(void) {
  int n;
    printf("Enter the size:");
     scanf("%d",&n);
     int arr[n];

    printf("Enter the numbers: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Even numbers are: \n");
 int i=0;
    while(i<n){
        if(arr[i]%2==0){
            printf("%d\n",arr[i]);
        }
        i++;
    }

    printf("Negative no.s: \n");
    int j=0;
     while(j<n){
        if(arr[j]<0){
            printf("%d\n",arr[j]);
        }
        j++;
    }


    return 0;
}
