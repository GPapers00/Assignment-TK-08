#include <stdio.h>

float numAdder(float num1, float num2) {
    return num1 + num2;
}

float numMultiplier(float num1, float num2) {
    return num1 * num2;
}

float numSubstractor(float num1, float num2) {
    return num1 - num2;
}

float numDivider(float num1, float num2) {
    if (num2 == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return 0;
    }
    return num1 / num2;
}

int main() {
    int option;
    float num1, num2, result;

    printf("Welcome to the Calculator of mankind.\n");

    while (1) {
        printf("\nOptions:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
        printf("Enter 0 to end the program.\n");
        printf("Choose an option: ");
        scanf("%d", &option);

        if (option == 0) {
            printf("Exiting the program. Goodbye!\n");
            break;
        }

        printf("Enter the 1st Number: ");
        scanf("%f", &num1);
        printf("Enter the 2nd Number: ");
        scanf("%f", &num2);

        switch (option) {
            case 1:
                result = numAdder(num1, num2);
                break;
            case 2:
                result = numSubstractor(num1, num2);
                break;
            case 3:
                result = numMultiplier(num1, num2);
                break;
            case 4:
                result = numDivider(num1, num2);
                break;
            default:
                printf("Invalid option. Please choose a valid option.\n");
                continue;
        }

        printf("Result: %.2f\n", result);
    }

    return 0;
}
