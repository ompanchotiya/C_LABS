#include<stdio.h>
struct emp
{
    int id,sal;
    char *name;
}e1;
void main(){
    e1.id=101;
    e1.sal=4000000;
    e1.name="mayank";
    printf("emp id=%d\n",e1.id);
    printf("emp sal=%d\n",e1.sal);
    printf("emp name=%s\n",e1.name);

}