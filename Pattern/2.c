#include<stdio.h>

void main(){
    
   int n,sum=0;
    printf("enter the value of n: ");
    scanf("%d",&n);
    while (n!=0)
    {
        int x=n%10;
        n=n/10;
        sum=sum+x;
    }
     printf("%d",sum);
    return 0;
}