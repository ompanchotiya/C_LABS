#include<stdio.h>
int fact(int n);
void main(){
 int n;
 printf("enter the number n: ");
 scanf("%d",&n);
 int FACT=fact(n);
 printf("FACT=%d",FACT);
}
int fact(int n){
    int i=1,f=1;
    for ( i = n; i >0; i--)
    {
        f=f*i;
    }
    return f;
}