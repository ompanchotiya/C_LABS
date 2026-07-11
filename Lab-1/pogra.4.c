#include<stdio.h>
void main()
{
    int a,b,c;
    float avg;
    printf("enter the value of a,b,c");
    scanf("%d %d %d",&a,&b,&c);
    avg=(float)(a+b+c)/3;
    printf("avg=%f",avg);
}