#include <stdio.h>

int main() {
    // Declare two variables to store the two integers
    int num1;
    // Get input from the user for the two integers
    printf("Enter first number: ");
    scanf("%d",&num1);
    int num2;
    printf("Enter second number: ");
    scanf("%d",&num2);
    // Calculate the sum of the two integers
    int sum = num1 - num2;
    // Print the sum to the console
    printf("The sum of the two integers is %d.\n", sum);
    return 0;
}