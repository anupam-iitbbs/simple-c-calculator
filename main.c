// main.c

#include <stdio.h>
#include "calculator.h"

int main() {
    int a, b, choice;

    printf("Simple Calculator in C\n");

    printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    switch(choice) {
        case 1:
            printf("Result: %d\n", add(a, b));
            break;
        case 2:
            printf("Result: %d\n", sub(a, b));
            break;
        case 3:
            printf("Result: %d\n", mul(a, b));
            break;
        case 4:
            if (b == 0)
                printf("Error: Division by zero\n");
            else
                printf("Result: %d\n", divide(a, b));
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}