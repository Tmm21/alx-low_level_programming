#include<stdio.h>
#include "main.h"
/**
 * main - Check description
 * Description: It print alphabets in lower case followed by a new line
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
