#include <stdio.h>

int main() {
    int num1,num2,sum;
    printf("Enter first number: ");
    scanf("%i",&num1);
    printf("Enter second number: ");
    scanf("%i",&num2);
    sum = num1%num2,
    printf("The reminder of the two integers is %i.\n", sum);
    return 0;
}