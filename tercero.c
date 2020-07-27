/*
* Dumb program that generates prime numbers.
*/
#include <stdio.h>
#include <stdlib.h>

#define PI 3.141592
#define SECS_PER_MIN 60
#define MIN_PER_HOUR 60
#define HOURS_PER_DAY 24

void find_prime_number(void);

int a;
float b;
char c;
double d;
long e;
long double f;

int main()
{
    find_prime_number();

    printf("============= C DATATYPES ==============\n");
    printf("int: %ld\n", sizeof(a));
    printf("float: %ld\n", sizeof(b));
    printf("char: %ld\n", sizeof(c));
    printf("double: %ld\n", sizeof(d));
    printf("long: %ld\n", sizeof(e));
    printf("long double: %ld\n", sizeof(f));

    return EXIT_SUCCESS;
}

void find_prime_number(void)
{
    printf("This would not be valid but doesn’t have \
a newline in it as far as the compiler is concerned\n");

    printf("all this"
           "comess out as"
           "just one string");

    int this_number, divisor, not_prime;
    this_number = 3;

    while (this_number < 100)
    {
        divisor = this_number / 2;
        not_prime = 0;
        while (divisor > 1)
        {
            if (this_number % divisor == 0)
            {
                not_prime = 1;
                divisor = 0;
            }
            else
            {
                divisor = divisor - 1;
            }
        }
        if (not_prime == 0)
        {
            printf("%d is a prime number\n", this_number);
        }
        this_number = this_number + 1;
    }
}