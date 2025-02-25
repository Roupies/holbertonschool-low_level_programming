#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char hexNum;
for (hexNum = '0'; hexNum <= 'f'; hexNum++)
{
if ((hexNum <= '9') || (hexNum >= 'a'))
putchar(hexNum);
}
putchar('\n');
return (0);
}
