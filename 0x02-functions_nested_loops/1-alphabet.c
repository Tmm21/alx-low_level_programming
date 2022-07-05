#include<stdio.h>
/**
 * main-program that print the alphabet in lowercase followed by a new line
 * Return:0
 */
void main(void)
{
int l = 'a';
while (l <= 'z')
{
Putchar(l);
l += 1;
}
putchar('\n');
return (0);
}
