#include <stdio.h>

/**
 *main - Entry point
 *Description: Prints the lowercase alphabet followed by a new line.
 *Return: Always 0 (success)
 *
 */

int main(void)
{
char letter = 'a';
while (letter <= 'z')
{
if (letter <= 'z')
{
putchar(letter);
}
else
{
putchar('\n');
}
letter++;
}
return (0);
}
