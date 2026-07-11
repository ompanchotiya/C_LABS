// Allocate dynamic memory for structure variable.
#include <stdio.h>
#include <stdlib.h>
struct student
{
    int roll_no;
    char name[100];
};
void main()
{
    struct student *s=malloc(sizeof(struct student));

    printf("Enter roll number : ");
    scanf("%d",&s->roll_no);
    printf("Enter student name : ");
    scanf("%s",s->name);
    printf("roll number : %d,name : %s",s->roll_no,s->name);
}