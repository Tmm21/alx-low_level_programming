#include<stdio.h>
#include <ctype.h>
#include<stdlib.h>
#include "main.h"

/**
 *_isupper - function to check for lowercase character
 * c:  is the int that will use for the argument of the function
 *    * Return: 0
 */



int _isupper ()
{
	 char c;



	     c = 'C';

	         printf("Return value when uppercase character %c is passed to isupper(): %d", c, isupper(c));



		     c = '+';

		         printf("\nReturn value when another character %c is passed to is isupper(): %d", c, isupper(c));



			    return 0;

}

