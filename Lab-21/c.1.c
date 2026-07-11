#include<stdio.h>
struct distant
{
    int feet,inch;
};
void main(){
   struct distant d1,d2,add;
   printf("enter the feet 1: ");
   scanf("%d",&d1.feet);
   printf("enter the inch 1: ");
   scanf("%d",&d1.inch);
   printf("enter the feet 2: ");
   scanf("%d",&d2.feet);
   printf("enter the inch 2: ");
   scanf("%d",&d2.inch);
   add.feet=d1.feet+d2.feet;
   add.inch=d1.inch+d2.inch;
   while (add.inch>=12)
   {
    add.feet+=1;
    add.inch-=12;
   }
   printf("%d %d",add.feet,add.inch);
}