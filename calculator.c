#include <stdio.h>

int main() {
    int num1, num2, result;
    char operator;
    printf("Enter first number:");
    scanf("%d", &num1);
    printf("Enter second number:");
    scanf("%d", &num2);
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result : %d\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result : %d\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result : %d\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result : %d\n", result);
            }
            else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
            break;
    }
    return 0;
}