#include <stdio.h>
/**
 * main - A program that prints the size of various types on the computer
 * Return: 0 (SUCCESS)
 */
int main(void)
{
char q;
int w;
long int e;
long long int r;
float t;

printf("Size of a char: %lu 1 byte(s)\n", (unsigned long)sizeof(q));
printf("Size of a int: %lu 4 byte(s)\n", (unsigned long)sizeof(w));
printf("Size of a long int: %lu 8 byte(s)\n", (unsigned long)sizeof(e));
printf("Size of a long long int: %lu 8 byte(s)\n", (unsigned long)sizeof(r));
printf("Size of a float: %lu 4 byte(s)\n", (unsigned long)sizeof(t));
return (0);
}
