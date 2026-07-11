#include<stdio.h>
void main(){
    int n,i=1,count_even=0,count_odd=0;
    while (i<=10)
    {
         printf("enter the value of n: ");
         scanf("%d",&n);
        if (n%2==0)
        {
            count_even++;
        }
        else
        {
            count_odd++;
        }
        i++;
    }
    printf("count_even=%d\n",count_even);
     printf("count_odd=%d\n",count_odd);
}