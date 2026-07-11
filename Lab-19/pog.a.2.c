#include<stdio.h>
void dispiay(int arr[],int size);
void main(){
 int i=0,n;
 printf("enter the number n: ");
 scanf("%d",&n);
 int arr[n];
 for ( i = 0; i < n; i++)
 {
    printf("enter the element: ");
    scanf("%d",&arr[i]);
    dispiay(arr,n);
 }
}
void dispiay(int arr[],int size){
    int i=0;
    for ( i = 0; i < size; i++)
    {
        printf("%d",arr[i]);
    }
    
}