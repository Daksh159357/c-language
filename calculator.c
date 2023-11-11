#include <stdio.h>

int main() {
    int num1, num2;
    char operator;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Enter two operands: ");
    scanf("%d %d", &num1, &num2);

    switch (operator) {
        case '+':
            printf("%d %c %d = %d", num1, operator, num2, num1 + num2);
            break;
        case '-':
            printf("%d %c %d = %d", num1, operator, num2, num1 - num2);
            break;
        case '*':
            printf("%d %c %d = %d", num1, operator, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("%d %c %d = %.2f", num1, operator, num2, (float)num1 / num2);
            else
                printf("Error! Division by zero is not allowed.");
            break;
        default:
            printf("Error! Invalid operator.");
    }

    return 0;
}