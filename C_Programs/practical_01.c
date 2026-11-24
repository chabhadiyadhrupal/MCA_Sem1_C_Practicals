/*
 * Harivandana College || HVC
 * Subject: Programming with C (MCA Semester 1)
 * Practical 1
 * Question: Write a program to that performs as calculator (addition, multiplication, division, subtraction).
 */

#include <stdio.h>

int main() {
    char operator;
    double first, second;

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);
    printf("Enter two operands: ");
    scanf("%lf %lf", &first, &second);

    switch (operator) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf\n", first, second, first + second);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf\n", first, second, first - second);
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf\n", first, second, first * second);
            break;
        case '/':
            if (second != 0.0)
                printf("%.2lf / %.2lf = %.2lf\n", first, second, first / second);
            else
                printf("Error! Division by zero is not allowed.\n");
            break;
        default:
            printf("Error! Invalid operator.\n");
    }

    return 0;
}
