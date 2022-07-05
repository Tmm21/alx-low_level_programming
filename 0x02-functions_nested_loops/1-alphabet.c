#include<stdio.h>
#include "main.h"
/**
 *print_alphabet - a function that print alphabet in lowercase
 *
 * Return: Always 0
 */

void print_alphabet(void)
{
char l = 'a';
while (l <= 'z')
{
putchar(l);
l += 1;
}
putchar('\n');
return;
}
