#include <stdio.h>
float max(float a,float b,float c);
void main() {
    float a,b,c;
    printf("enter the number a,bandc: ");
    scanf("%f %f %f",&a,&b,&c);
    printf("%f",max(a,b,c));
}
float max(float a,float b,float c){
    if (a>b)
    {
        if(a>c){
            return a;
        }else
        {
            return b;
        }
        
    }else if (b>c)
    {
        return b;
    }else
    {
        return c;
    }
}
