#include<stdio.h>
#include <ctype.h>
#include<stdlib.h>
#include "main.h"

/**
 *_isupper - function to check for lowercase character
 * c:  is the int that will use for the argument of the function
 *    * Return: 0
 */



int _isupper()
{
char chr;
if(chr>= "A" && chr<= "Z")
{
return 1;
}
else
return 0;
}
