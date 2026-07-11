#include <stdio.h>
void main() {
    int a,b,result;
    char choice;
    printf("enter the number a and b");
    scanf("%d %d",&a,&b);
    printf("enter the value choice(1=addition,2=subtraction,3=multiplication,4=division)");
    scanf("%c",&choice);
    if (choice =='1')
    {
        result=a+b;
        printf("%d\n",result);
    }else if (choice =='2')
    {
        result=a-b;
        printf("%d\n",result);
    }else if (choice=='3')
    {
        result=a*b;
        printf("%d\n",result);
    }else if (choice=='4')
    {
        if (b!=0)
        {
             result=a/b;
             printf("%d\n",result);
        }else{
            printf("division by zreo!\n");
        }
        
    }else
    {
        printf("invalid choice!\n");
    }
}
