#include<stdio.h>
struct A
{
    int a[10];
    char c;
};
union B{
    int x[10];
    char d;
};
void main(){
    printf("%d ",sizeof(struct A));
    printf("%d",sizeof(union B));
}