#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always return 0(success)
 */
int main(void)
{
int e, i, j, k;
for (e = 48; e <= 57; e++)
{
for (i = 48; i <= 57; i++)
{
for (j = 48; j <= 57; j++)
{
for (k = 48; k <= 57; k++)
{
if (((j + k) > (e + i) && j >= e) || e < j)
{
putchar(e);
putchar(i);
putchar(32);
putchar(j);
putchar(k);

if (e + i + j + k == 227 && e == 57)
{
break;
}
else
{
putchar(44);
putchar(32);
}
}
}
}
}
}
putchar(10);
return (0);
}
