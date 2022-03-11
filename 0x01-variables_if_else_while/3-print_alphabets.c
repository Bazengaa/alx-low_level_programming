#include <stdio.h>
/**
* main - Entry point
*
* program prints alphabet in lowercase then uppercase
*
* Return: Always 0 (Successful)
**/
int main(void)
{
char alpha;
char ALPHA;

for (alpha = 'a'; alpha <= 'z'; alpha++)
{putchar(alpha); }
for (ALPHA = 'A'; ALPHA <= 'Z'; ALPHA++)
{putchar(ALPHA); }
putchar('\n');
return (0);
}
