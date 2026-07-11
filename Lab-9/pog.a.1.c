#include <stdio.h>
void main() {
    int n, i = 1, sum = 0;
    printf("Enter value of n: ");
    scanf("%d", &n);

    while (i <= n) {
        sum=sum+i-(i+1);
        i++;
    }

    printf("Sum of series = %d\n", sum);
}
