// Create menu driven calculator using function.
#include<stdio.h>

int add(int num1, int num2);
int sub(int num1, int num2);
int mul(int num1, int num2);
float divide(int num1, int num2);  


int main() {
    int num1, num2, choice, ans;
    float result;
    printf("\n------------MENU------------");
    
    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);
    
    printf("\nEnter first number: ");
    scanf("%d", &num1);
    printf("\nEnter second number: ");
    scanf("%d", &num2);

    switch(choice) {
        case 1:
            ans = add(num1, num2);
            printf("\nThe addition of %d and %d is %d", num1, num2, ans);
            break;
        case 2:
            ans = sub(num1, num2);
            printf("\nThe subtraction of %d and %d is %d", num1, num2, ans);
            break;
        case 3:
            ans = mul(num1, num2);
            printf("\nThe multiplication of %d and %d is %d", num1, num2, ans);
            break;
        case 4:
            if (num2 != 0) {
                result = divide(num1, num2);
                printf("\nThe division of %d and %d is %.2f", num1, num2, result);
            } else {
                printf("\nError: Division by zero is not allowed.");
            }
            break;
        default:
            printf("\nInvalid input");
    }

    return 0;
}

// Function definitions
int add(int num1, int num2) {
    return num1 + num2;
}

int sub(int num1, int num2) {
    return num1 - num2;
}

int mul(int num1, int num2) {
    return num1 * num2;
}

float divide(int num1, int num2) {  
    return (float)num1 / num2;
}

