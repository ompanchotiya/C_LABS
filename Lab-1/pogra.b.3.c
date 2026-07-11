#include<stdio.h>
void main(){
    float f,c;
    printf("enter the temperature in f: ");
    scanf("%f",&f);
    float p=f-32 ;
    c=((f - 32)* 5)/9;
    printf("%f",c);
}
