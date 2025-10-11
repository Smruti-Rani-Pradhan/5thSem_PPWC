#include <stdio.h>

#define VALUE 10

int add(int a, int b);

int main(void) {
    int num1 = 5;
    int num2 = VALUE;
    int result = add(num1, num2);
    
    printf("Total is: %d\n", result);
    return 0;
}

int add(int a, int b) {
    return a + b;
}
