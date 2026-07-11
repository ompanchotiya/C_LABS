#include <stdio.h>
void main() {
    int n,lastdigit,odd,even;
    printf("enter the value of n: ");
    scanf("%d",&n);
    lastdigit = n % 10;
    if (lastdigit%2 == 0)
    {
        printf("%d\n",even);
    }
    else{
        printf("%d\n",odd);
    }
}