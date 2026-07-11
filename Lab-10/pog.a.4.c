#include <stdio.h>
void main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Digits: ");
    while (n > 0) {
        int digit = n % 10;
        printf("%d ", digit); 
        n = n / 10;
    }

    printf("\n");
   
}
