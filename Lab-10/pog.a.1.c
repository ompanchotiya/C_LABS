#include <stdio.h>

void main() {
    int n, firstDigit, lastDigit;
    printf("Enter a number: ");
    scanf("%d", &n);
    lastDigit = n % 10;  
    while (n >= 10) {
        n = n / 10;   
    }
    firstDigit = n;

    printf("Sum of first and last digit = %d\n", firstDigit + lastDigit);
    
}
