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
    if (n==1)
    {
        return 1;
    }else
    {
        return n*fact(n-1);
    }
    
    
}