#include <stdio.h>
void main() {
    int num1, num2;
    char operator;  
    float c;   
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    switch (operator)
    {
    case '+':
        c=num1+num2;
        printf("%f\n",c);
        break;
    case '-':
        c=num1-num2;
        printf("%f\n",c);
        break;
    case '*':
        c=num1*num2;
        printf("%f\n",c);
        break; 
    case '/':
        if (num2!=0)
        {
            c=num1/num2;
            printf("%f\n",c);
        break;
        }else{
            printf("Error! Division by zero is not allowed.\n");
        break;
        }
    default: 
    printf("Error! Operator is not correct.\n");
        break;
    }
}