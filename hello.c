#include <stdio.h>

int main() {
    int num1, num2, sum;

    // Input two integers
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Calculate sum
    sum = num1 + num2;

    // Output result
    printf("Sum = %d\n", sum);

    return 0;
}
