#include <stdio.h>

int main() {
    int sum = 0;
    float avg = 0.0;
    int count = 0;
    int n;
    printf("Enter the size:");
     scanf("%d",&n);
     int arr[n];

    printf("Enter the numbers: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    avg = (float)sum / n;

    for (int i = 0; i < n; i++) {
        if (arr[i] > avg) {
            count++;
         }
    }
    printf("Average= %f\n",avg);
    printf("Elements greater than avg: %d\n", count);
    return 0;
}
