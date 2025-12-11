#include <stdio.h>


int add(int a, int b) {
    return a + b;
}
int sub(int a, int b) {
    return a - b;
}
int mul(int a, int b) {
    return a * b;
}
int divide(int a, int b) {
    return a / b;
}
int mod(int a, int b) {
    return a % b;
}

int main() {
    int choice, a, b;

    while(1) 
    {
        // Menu
        printf("\nPress 1 for +");
        printf("\nPress 2 for -");
        printf("\nPress 3 for *");
        printf("\nPress 4 for /");
        printf("\nPress 5 for %%");
        printf("\nPress 0 for the exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        if(choice == 0) {
            printf("Exiting...");
            break;
        }

        printf("Enter the first number: ");
        scanf("%d", &a);
        printf("Enter the second number: ");
        scanf("%d", &b);

        switch(choice)
        {
            case 1:
                printf("Addition of %d and %d is %d\n", a, b, add(a,b));
                break;

            case 2:
                printf("Subtraction of %d and %d is %d\n", a, b, sub(a,b));
                break;

            case 3:
                printf("Multiplication of %d and %d is %d\n", a, b, mul(a,b));
                break;

            case 4:
                if(b == 0)
                    printf("Error! Division by zero not allowed.\n");
                else
                    printf("Division of %d and %d is %d\n", a, b, divide(a,b));
                break;

            case 5:
                if(b == 0)
                    printf("Error! Modulo by zero not allowed.\n");
                else
                    printf("Modulo of %d and %d is %d\n", a, b, mod(a,b));
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }
    }
    
    return 0;
}
