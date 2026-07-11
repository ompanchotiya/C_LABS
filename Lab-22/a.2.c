#include<stdio.h>
void main(){
    FILE *fp;
    int c=0,s=0,t=0,n=0;
    fp=fopen("mayank@.txt","r");
    char ch=fgetc(fp);
    while (ch!=EOF)
    {
        if (ch=='\n')
        {
            n++;
        }else if (ch=='\t')
        {
            t++;
        }else if (ch==' ')
        {
            s++;
        }else
        {
            c++;
        }
        ch=fgetc(fp);
        
    }
    printf("%d %d %d %d",n,t,s,c);
    fclose(fp);
}