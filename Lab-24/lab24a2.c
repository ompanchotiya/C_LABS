//Calculate the sum of n numbers entered by the user using malloc(). 
#include<stdio.h>
#include<stdlib.h>
int main() {
   int *p=malloc(sizeof(int)*2),i,sum=0;
   for ( i = 0; i < 2; i++)
   {
    printf("Enter a number : ");
    scanf("%d",(p+i));
    sum=sum+*(p+i);
   }
   printf("%d",sum);
}