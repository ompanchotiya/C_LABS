#include <stdio.h>
void main() {
    int x, y, i = 1,result = 1;
    printf("Enter base (x): ");
    scanf("%d", &x);
    printf("Enter exponent (y): ");
    scanf("%d", &y);

    while (i <= y) {
        result *= x;
        i++;
    }

    printf("%d\n", result);
    
}
