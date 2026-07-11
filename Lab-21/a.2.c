#include<stdio.h>
struct book
{
    char tit[100],aut[100],pub[100];
    float price;
}arr[3];
void main(){
    
    for (int i = 0; i < 3; i++)
    {
        printf("enter book title");
        scanf(" %s",arr[i].tit);
        printf("enter book aut");
        scanf(" %s",arr[i].aut);
        printf("enter book pub");
        scanf(" %s",arr[i].pub);
        printf("enter book price");
        scanf("%f",&arr[i].price);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%s %s %s",arr[i].tit,arr[i].aut,arr[i].pub);
        printf("%f",arr[i].price);
    }
}