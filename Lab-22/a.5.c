#include<stdio.h>
void main(){
    FILE *fp1,*fp2;
    char str[100];
    fp1=fopen("mayank@.txt","w");
    fp2=fopen("pathar.txt","r");
    while (fscanf(fp2,"%s",str)==1)
    {
        fprintf(fp1,"%s",str);
    }
    
}