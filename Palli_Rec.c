#include <stdio.h>
#include <string.h>
void rev(char str[],int i) {
    int e = strlen(str)-1;
    if(e<0){
        return;
    }
    rev(str[i],i-1);
    printf("%s",str[i]);
}


int main() {
    char str[100];
    int i=0;
    printf("Enter the String: ");
    scanf("%s", str);
   rev(str,i);
    return 0;
}
