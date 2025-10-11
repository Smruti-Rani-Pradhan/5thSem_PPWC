#include <stdio.h>
#include <string.h>

void isPalindrome(char str[]) {
    int len = strlen(str)-1;
    char reversed[100]; 
    int j = 0;

    for (int i = len; i >= 0; i--) {
        reversed[j++] = str[i];
    }
    reversed[j] = '\0'; 
printf("%s",reversed);
}


int main() {
    char str[100];
    printf("Enter the String: ");
    scanf("%s", str);
   isPalindrome(str);
    return 0;
}
