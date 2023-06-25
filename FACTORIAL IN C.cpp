#include <stdio.h>

unsigned long long factorial(unsigned int n)
{
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int main()
{
    unsigned int number;

    printf("Enter a non-negative integer: ");
    scanf("%u", &number);

    unsigned long long fact = factorial(number);

    printf("Factorial of %u is: %llu\n", number, fact);

    return 0;
}
