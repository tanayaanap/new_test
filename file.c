#include <stdio.h>
#include <math.h>

int main() {
    double num1, num2, result;
    char op;

    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter operator (+, -, *, /, ^): ");
    scanf(" %c", &op);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    switch(op) {
        case '+': result = num1 + num2; break;
        case '-': result = num1 - num2; break;
        case '*': result = num1 * num2; break;
        case '/':
            if(num2 == 0) {
                printf("Error: Division by zero!\n");
                return 1;
            }
            result = num1 / num2;
            break;
	case '^': result = pow(num1,num2); break;        
        default: printf("Invalid operator.\n"); return 1;
    }

    printf("Result: %.2lf\n", result);
    return 0;
}
