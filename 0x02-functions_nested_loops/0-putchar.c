#include "_putchar.h"
/**
 * main - entry point
 *
 * Description: Prints _putchar with _putchar
 *
 * Return: always 0
 */
int main(void)
{
int i = 0;
char c;
char s[] = "_putchar\n";
while (i <= 8)
{
c = s[i];
_putchar(c);
i++;
}
return (0);
}