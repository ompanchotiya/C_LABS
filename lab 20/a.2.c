#include <stdio.h>
#include<string.h>
void main() {
    char str[100];
    char *p = str;
    char *q = str;
    int i;
    printf("Enter a string: ");
    gets(str);
    for ( i = 0; *(p+i)!=0; i++)
    {
         if ((*(p+i) >= 'A' && *(p+i) <= 'Z') || 
            (*(p+i) >= 'a' && *(p+i) <= 'z')) 
        {
            *q = *(p+i);   
            q++;
        }
    }
    *q='\0';
    printf("%s",str);
      
}