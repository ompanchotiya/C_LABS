#include <stdio.h>

int main() {
    int sub1, sub2, sub3, sub4, sub5, total_marks;
    float percentage;
    
    printf("Enter marks for five subjects (out of 100 each):\n");
    scanf("%d %d %d %d %d", &sub1, &sub2, &sub3, &sub4, &sub5);
    
    total_marks = sub1 + sub2 + sub3 + sub4 + sub5;
    percentage = (float)total_marks / 500 * 100;
    
    printf("Percentage: %.2f%%\n", percentage);
    
    if (percentage < 35) {
        printf("Result: Fail\n");
    } else if (percentage >= 36 && percentage <= 45) {
        printf("Result: Pass Class\n");
    } else if (percentage >= 46 && percentage <= 60) {
        printf("Result: Second Class\n");
    } else if (percentage >= 61 && percentage <= 70) {
        printf("Result: First Class\n");
    } else {
        printf("Result: Distinction\n");
    }
}