#include<stdio.h>
void main(){
    char s1[100]="Hellow",s2[100]="World";
    int opr;
    printf("enter the number(1 to 7): ");
    scanf("%d",&opr);
    switch (opr)
    {
    case 1:
        printf("s1=%d\ns2=%d",strlen(s1),strlen(s2));
        break;
    case 2:
        printf("%s",strcmp(s1,s2));
        break;
    case 3:
        printf("%s",strcpy(s1,s2));
        break;
    case 4:
        printf("%s",strcat(s1,s2));
        break;
    case 5:
        printf("%s",strrev(s1));
        printf("%s",strrev(s2));
        break;
    case 6:
        printf("%s",strlwr(s1));
        printf("%s",strlwr(s2));
        break;
    case 7:
        printf("%s",strupr(s1));
        printf("%s",strupr(s2));
        break;
    default:
        printf("invalide input");
        break;
    }
}