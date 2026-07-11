#include <stdio.h>
void main()
{
    int i,j;
    char arr[7];
    
    for ( i = 0; i <7; i++)
    {
        printf("enter the element of arr: ");
        scanf("%c",arr[i]);
    }
    for ( i = 0; i <=6; i++)
    {

        for ( j = 0; j <=6-i; j++)
        {
            printf(" ");
        }
        for ( j = 0; j <=i;j++)
        {
            printf("%c ",arr[j]);
        }
                  printf("\n");
    }
    
}
