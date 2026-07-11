#include <stdio.h>
float intrest(float p,float r,int t);
void main() {
    float p,r;
    int t;
    printf("enter the money: ");
    scanf("%f",&p);
    printf("enter the intrest: ");
    scanf("%f",&r);
    printf("enter the time: ");
    scanf("%d",&t);
    float INTREST=intrest(p,r,t);
    printf("INTREST=%f",INTREST);
}
float intrest(float p,float r,int t){
    float intrest=(p*r*t)/100;
    return intrest;
}