#include <stdio.h>

int main() {
    // Declare two variables
    int first_integer, second_integer;

    // Prompt the user to enter two integers
    printf("Enter two integers:");

    // Read the two integers from the user
    scanf("%d%d",&first_integer, &second_integer);

    // Calculate the product of the two integers
    int product = first_integer * second_integer;

    // Display the product of the two integers
    printf("The product of the two integers is %d.\n", product);

    return 0;
}