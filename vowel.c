#include <stdio.h>
#include <string.h>

int main(){
 char str[10];
 printf("Enter the String :");
 scanf("%s",str);
 for(int i=0;i<strlen(str);i++){
    if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
    printf("It's a vowel");
else{
    printf("It's not");
}
 }
 return 0;
}