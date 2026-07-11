#include<stdio.h>
void main(){
    FILE *fp;
    fp=fopen("mayank@.txt","w");
    if (fp)
    {
        printf("flie opened");

    }
    fclose(fp);
}