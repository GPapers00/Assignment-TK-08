#include <stdio.h>

int main() {
    int option = 1;
    float num1, num2;
    while(option > 0) {
        printf("Welcome to the Calculator of mankind.\n");
        printf("Options :\n1. Addition\n2. Substraction\n3. Multiplication\n4. Division\n");
        printf("Enter 0 to end the program.\n");
        scanf("%d", &option);
        printf("Enter the 1st Number : ");
        scanf("%f", &num1);
        printf("\nEnter the 2nd Number : ");
        scanf("%f", &num2);


        switch(option) {
            case '0':
            return 0;
            
            case '1':
            numAdder(num1, num2);

            case '2':
            numSubstractor(num1, num2);

            case '3':
            numMultiplier(num1, num2);

            case '4':
            numDivider(num1, num2);
        }

        printf("Result : %.1f", num1);
    }
}