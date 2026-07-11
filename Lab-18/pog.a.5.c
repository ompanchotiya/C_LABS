#include<stdio.h>
void swap_v(int a,int b);
void swap_r(int *p,int *q);
void main(){
    int x,y;
    printf("enter the x: ");
    scanf("%d",&x);
    printf("enter the y: ");
    scanf("%d",&y);
    swap_v(x,y);
    printf("%d %d",x,y);
    swap_r(&x,&y);
     printf("%d %d",x,y);
}
void swap_v(int a,int b){
    int temp=a;
    a=b;
    b=temp;
}
void swap_r(int *p,int *q){
    int temp=*p;
    *p=*q;
    *q=temp;
}