#include<stdio.h>
void main(){
    int n,odd,even;
    printf("enter the number of n: ");
    scanf("%d",&n);
    switch (n>0)
    {
    case (1):
        if (n%2==0)
        {
            printf("%d",even);
        }else
        {
            printf("%d",odd);
        }
        break;
    
    default:
    printf("Error! zreo number.\n");
        break;
    }
}