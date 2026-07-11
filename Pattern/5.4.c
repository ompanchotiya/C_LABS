#include <stdio.h>
void main()
{
    int i,j;
    for ( i = 5; i >0; i--)
    {
        for ( j = 1; j <=5-i; j++)
        {
            printf(" ");
        }
        for ( j = 1; j <=i;j++)
        {
            if (i%2!=0)
            {
                printf(" *");
            }else
            {
                printf(" #");
            }
            
            
        }
                  printf("\n");
    }
    
}
