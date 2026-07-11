#include <stdio.h>
int max(int x,int y);
int min(int x,int y);
void main() {
    int a,b,MAX,MIN;
    printf("enter the number a and b: ");
    scanf("%d %d",&a,&b);
    MAX=max(a,b);
    MIN=min(a,b);
    printf("MAX=%d\n MIN=%d",MAX,MIN);
}
int max(int x,int y){
    if(x>y){
        return x;
    }else
    {
        return y;
    }
    
}
int min(int x,int y){
    if (x<y)
    {
        return x;
    }else
    {
        return y;
    }
    
    
}
