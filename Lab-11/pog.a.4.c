#include <stdio.h>
void main() {
    int x, y, i,result = 1;
    printf("Enter base (x): ");
    scanf("%d", &x);
    printf("Enter exponent (y): ");
    scanf("%d", &y);
    for (i = 1; i <= y; i++) {
        result *= x;
    }
    printf("%d\n",result);
}
