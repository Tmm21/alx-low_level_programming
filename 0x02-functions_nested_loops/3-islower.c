#include<stdio.h>
#include "main.h"
/**
 * _islower - a function that checks for lowercase character
 * Return: Aklways 0
 */
int _islower(void)
{
char ch
if(ch >= 'A' && ch <= 'Z')
{
return 0;
}
else if(ch >= 'a' && ch <= 'z')
{
return 1;
}
}
