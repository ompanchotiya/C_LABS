#include <stdio.h>
void main() {
    int num, count = 0;
    float sum = 0;
    char choice = 'y';
    while (choice == 'y' || choice == 'Y') {
        printf("Enter a number: ");
        scanf("%d", &num);
        sum += num;
        count++;

        printf("Do you want to enter another number? (y/n): ");
        scanf(" %c", &choice); 
    }

    printf("Sum = %.2f\n", sum);
    printf("Average = %.2f\n", sum / count);

}
