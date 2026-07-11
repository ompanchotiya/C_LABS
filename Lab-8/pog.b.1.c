#include<stdio.h>
int main(){
    int n;
    printf("enter the number(100<n<200) of n: ");
    scanf("%d",&n);
    if (n%7==0 && n%5!=0)
    {
        printf("%d",n);
    }
    else
    {
        printf("not divisible");
    }
    
    
    return 0;
}
