#include <stdio.h>
#include <stdlib.h>

void hexadecimal_calculator() {
    char hex1[20], hex2[20];
    int num1, num2, result;
    char operator;

    printf("Enter first hexadecimal number: ");
    scanf("%s", hex1);
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);
    printf("Enter second hexadecimal number: ");
    scanf("%s", hex2);

    num1 = (int)strtol(hex1, NULL, 16);
    num2 = (int)strtol(hex2, NULL, 16);

    switch (operator) {
        case '+': result = num1 + num2; break;
        case '-': result = num1 - num2; break;
        case '*': result = num1 * num2; break;
        case '/': 
            if (num2 != 0) result = num1 / num2;
            else { printf("Division by zero error.\n"); return; }
            break;
        default: printf("Invalid operator.\n"); return;
    }

    printf("Result in hexadecimal: %X\n", result);
}
