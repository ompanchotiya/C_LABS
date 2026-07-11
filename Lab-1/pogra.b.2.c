#include<stdio.h>
void main(){
    float principal,roi,timeperiod,c;
    printf("enter the value of principal,roi and time period");
    scanf("%f %f %f",&principal,&roi,&timeperiod);
    c=(principal*roi*timeperiod)/(100);
    printf("%f",c);
}
