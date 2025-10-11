#include <stdio.h>
#include <stdbool.h>
void check(char ch) {
    if(ch>='a' && ch<='z'){
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
        printf("It's a vowel\n");
    } else 
         printf("It's a consonant\n");

   }
   else
     printf("its neither");
    
}

int main(void) {
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    check(c);
    return 0;
}
