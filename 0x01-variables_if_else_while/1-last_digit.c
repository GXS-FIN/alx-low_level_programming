#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program generates a random number and
 * prints the last digit of that number along with some strings.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int lastDigit;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n < 0)
{
lastDigit = -(n % 10);
}
else
{
lastDigit = n % 10;
}

printf("Last digit of %d is ", n);

if (lastDigit > 5)
{
printf("greater than 5\n");
}
else if (lastDigit == 0)
{
printf("0\n");
}
else
{
printf("less than 6 and not 0\n");
}

return (0);
}
