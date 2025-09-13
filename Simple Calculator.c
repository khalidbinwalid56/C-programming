#include <stdio.h>

int main() {
    float num1, num2;
    char op;

    // Input
    printf("Enter simple math operation: ");
    scanf("%f%c%f", &num1, &op, &num2);


    // Switch-case for operations
    switch (op) {
        case '+':
            printf("Result: %.2f\n", num1 + num2);
            break;
        case '-':
            printf("Result: %.2f\n", num1 - num2);
            break;
        case '*':
            printf("Result: %.2f\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("Result: %.2f\n", num1 / num2);
            else
                printf("Error: Division by zero is not allowed.\n");
            break;
        default:
            printf("Error: Invalid operator.\n");
    }

    return 0;
}
