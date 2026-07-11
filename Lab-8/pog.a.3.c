#include <stdio.h>
void main() {
    int start, end;
    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);
    int i=start;
    while (i <= end) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
        i++;
    }
}
