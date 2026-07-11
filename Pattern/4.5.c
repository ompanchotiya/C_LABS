#include <stdio.h>
void main()
{
    int i,j;
    for ( i = 0; i <5; i++)
    {
        for ( j = 0; j <5-i; j++)
        {
            printf(" ");
        }
        for ( j = 0; j <i;j++)
        {
            printf(" *");
        }
                  printf("\n");
    }
    int a=1,b=1;
    for ( a = 4; a>0; a--)
    {
        printf("  ");
        for ( b = 1; b <5-a; b++)
        {
            printf(" ");
        }
        for ( b = 1; b <a;b++)
        {
            printf(" *");
        }
                  printf("\n");
    }
    
}


