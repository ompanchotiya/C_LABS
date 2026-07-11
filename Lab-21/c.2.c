#include<stdio.h>
struct time
{
    int sec,min,hour;
};
void main(){
   struct time t1,t2,add;
   printf("enter the time1 hour: ");
   scanf("%d",&t1.hour);
   printf("enter the time1 min: ");
   scanf("%d",&t1.min);
   printf("enter the time1 sec: ");
   scanf("%d",&t1.sec);
   printf("enter the time2 hour: ");
   scanf("%d",&t2.hour);
   printf("enter the time2 min: ");
   scanf("%d",&t2.min);
   printf("enter the time2 sec: ");
   scanf("%d",&t2.sec);
   add.hour=t1.hour+t2.hour;
   add.min=t1.min+t2.min;
   add.sec=t1.sec+t2.sec;
   while (add.sec>=60)
   {
    add.min+=1;
    add.sec-=60;
   }
   while (add.min>=60)
   {
    add.hour+=1;
    add.min-=60;
   }
   printf("%d %d %d",add.hour,add.min,add.sec);
}