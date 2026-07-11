#include<stdio.h>
#include<string.h>
void main(){
    char s[100],p[100],*str,*ptr;
    str=&s;
    ptr=&p;
    printf("enter the strig:");
    gets(s);
     printf("enter the strig2:");
    gets(p);
    strcpy(ptr,str);
    printf("%c",*ptr);      
    }

