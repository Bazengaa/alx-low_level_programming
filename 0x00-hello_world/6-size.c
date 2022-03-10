#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{ char a;
int i;
long int k;
long long int h;
float l;
printf("Size of a char: %ld byte(s)\n", sizeof(a));
printf("Size of an int: %ld byte(s)\n", sizeof(i));
printf("Size of a long int: %ld byte(s)\n", (unsigned long)sizeof(k));
printf("Size of a long long int: %ld byte(s)\n", (unsigned long)sizeof(h));
printf("Size of a float: %ld byte(s)\n", sizeof(l));

return (0);

}
