#include <stdio.h>
int add(int x,int y);
void main() {
    int a=5,b=10;
    int c=add(a,b);
    printf("%d",c);
}
int add(int x,int y){
    return x+y;
}
