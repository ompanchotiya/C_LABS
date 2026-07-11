#include<stdio.h>
struct student
{
    char name[100];
    float per,age;
}arr[5];
void main(){
    
    for (int i = 0; i < 5; i++)
    {
        printf("enter student name");
        scanf(" %s",arr[i].name);
        printf("enter student per");
        scanf("%f",&arr[i].per);
        printf("enter student age");
        scanf("%f",&arr[i].age);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%s",arr[i].name);
        printf("%f %f",arr[i].per,arr[i].age);
    }
    
    
}