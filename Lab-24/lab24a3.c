//3. Calculate the sum of n numbers entered by the user using calloc(). 
#include<stdio.h>
#include<stdlib.h>
int main() {
    int n,i,sum=0;
    printf("Enter how many term you have to add : ");
    scanf("%d",&n);
    int *p=calloc(n,sizeof(int));
    for ( i = 0; i < n; i++)
    {
        printf("Enter a number : ");
        scanf("%d",(p+i));
        sum=sum+*(p+i);
    }
    printf("%d",sum);
    free(p);
}