#include<stdio.h>

int main(){
    
    int n,i=0,sum=0;
    printf("enter the value of n: ");
    scanf("%d",&n);
    int arr[n];
    for ( i = 0; i < n; i++)
    {
        printf("enter the element of arr: ");
        scanf("%d",&arr[i]);
        if (arr[i]%2==0)
        {
            sum=sum+arr[i];
        }
        
    }
    printf("%d",sum);
    return 0;
}