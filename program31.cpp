#include <stdio.h>

int main() {
    char op;
    double n1, n2;
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);
    printf("Enter two operands: ");
    scanf("%lf %lf", &n1, &n2);
    switch (op) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf\n", n1, n2, n1 + n2);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf\n", n1, n2, n1 - n2);
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf\n", n1, n2, n1 * n2);
            break;
        case '/':
            printf("%.2lf / %.2lf = %.2lf\n", n1, n2, n1 / n2);
            break;
        default:
            printf("Error! operator is not correct\n");
    }
    return 0;
}
