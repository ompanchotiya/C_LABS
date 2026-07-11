#include<stdio.h>
#include<string.h>
void main(){
    char str[20];
    printf("enter the string: ");
    gets(str);
    if(strcmp(str,strrev(str))==0){
        printf("string is palindrom");

    }else
    {
        printf("string is not palindom");
    }
    
}