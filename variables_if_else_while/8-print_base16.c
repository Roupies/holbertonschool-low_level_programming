#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char hexNum;
for (hexNum = '0'; hexNum <= 'F'; hexNum++)
{
putchar(hexNum);
}
putchar('\n');
return (0);
}
