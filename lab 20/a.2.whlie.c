#include <stdio.h>
#include<string.h>
void main() {
    char str[100];
    char *p = str;
    char *q = str;

    printf("Enter a string: ");
    gets(str);  
    while (*p != '\0') {
        
        if ((*p >= 'A' && *p <= 'Z') || 
            (*p >= 'a' && *p <= 'z') || 
            (*p >= '0' && *p <= '9')) 
        {
            *q = *p;   
            q++;
        }
      
        p++;
    }
    
    *q = '\0';   

    printf("Result: %s", str);
}