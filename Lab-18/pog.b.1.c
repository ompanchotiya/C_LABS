#include <stdio.h>
void fibonacci(int n);
void main() {
    int n;
    printf("enter the n: ");
    scanf("%d",&n);
    fibonacci(n);
}
void fibonacci(int n){ 
    int n1=1,n2=1,next;
    if (n==1)
    {
        printf("%d\n",n1);
    }
    else if (n==2)
    {
        printf("%d\n",n2);
    }
    else
    {
        printf("%d %d",n1,n2);
        while (n>2)
        {
            next=n1+n2;
            printf("%d",next);
            n1=n2;
            n2=next;
            n--;
        }   
    }
}
