#include<stdio.h>
/**
 * main-program that print the alphabet in lowercase followed by a new line
 * Description:It print alphabets in lower case
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
