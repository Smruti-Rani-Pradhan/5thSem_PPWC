#include <stdio.h>
#include <string.h>
int isPallindrome(char str[]){
    int i=0,r=strlen(str)-1;
    while(i<r/2){
        if(str[i]==str[r]){
        i++;
        r--;
    }
    else return 0;
}
}
    
int main(){
 char str[10];
 printf("Enter the String :");
 scanf("%s",str);
 
 if(isPallindrome(str)){
    printf("It's a pallindrome");
 }
 else{
    printf("It's not a pallindrome");
 }
 return 0;
}