#include <stdio.h>
int main() {
    double num1, num2;
    char operator;
    // Ask user to input two numbers and an operator
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);  // The space before %c ensures it reads the operator properly
    printf("Enter second number: ");
    scanf("%lf", &num2);
    // Perform the operation based on the operator
    switch (operator) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
            } else {
                printf("Error! Division by zero.\n");
            }
            break;
        default:
            printf("Invalid operator.\n");
            break;
    }
    return 0;
}