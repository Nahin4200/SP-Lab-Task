#include <stdio.h>

int main() {
    char operator;
    float num1, num2, result;

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter numbers: ");
    scanf("%f %f", &num1, &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf(" %f\n",  result);
            break;
        case '-':
            result = num1 - num2;
            printf("%f\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("%f\n", result);
            break;
        case '/':

                result = num1 / num2;
                printf(" %f\n", result);

    default:
            printf("Invalid operator\n");
            break;
    }

    return 0;
}
