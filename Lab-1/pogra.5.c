#include<stdio.h>
void main(){
    int r;
    float area;
    printf("enter the value of r");
    scanf("%d",&r);
    const float pi = 3.14159;
    area=pi*r*r;
    printf("%f",area);
}