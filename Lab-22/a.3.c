#include<stdio.h>
void main(){
    FILE *fp;
    fp=fopen("mayank@.txt","w");
    char str[]="mayank@";
    fprintf(fp,"%s",str);
    fclose(fp);
    fp=fopen("pathar.txt","w");
    fscanf(fp,"%s",str);
    printf("%s",str);
    rewind(fp);
    char ch=fgetc(fp);
    printf("%c",ch);
    fseek(fp,1,2);
    fputc('A',fp);
}