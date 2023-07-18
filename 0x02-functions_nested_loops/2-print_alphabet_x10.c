#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase 10 times.
 */
void print_alphabet_x10(void)
{
char letter = 'a';
int i, j;

for (i = 0; i < 10; i++)
{
for (j = 0; j < 26; j++)
{
_putchar(letter);
letter++;
}
letter = 'a'; /* Reset letter to 'a' for the next line */
_putchar('\n');
}
}
