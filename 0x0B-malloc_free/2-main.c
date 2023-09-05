#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *  * main - check the code for ALX School students.
 *   *
 *    * Return: Always 0.
 *     */
int main(void)
{
	    char *s;
	    char *s1;

	        s = str_concat("Betty ", "Holberton");
		s1 = str_concat("Hello", NULL);
		    if (s == NULL)
			        {
					        printf("failed\n");
						        return (1);
							    }
		        printf("%s\n", s);
			printf("%s\n", s1);
			    free(s);
			    free(s1);
			        return (0);
}
