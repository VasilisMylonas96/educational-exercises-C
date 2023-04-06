#include <stdio.h>
#include <string.h>    /* strlen(), strcpy() */
#include <stdlib.h>    /* For malloc() */


char *my_strdup(char *s)
{
	char *new;

	if (s == NULL)       /* Make sure the user gave valid input */
		return (NULL);

	/* Allocate enough space (we need \0, too) */
	new = malloc( strlen(s)+1 );
	if (new == NULL)     /* Check */
		printf("malloc error; cannot continue.\n");
	else
		strcpy(new, s);    /* Just copy the characters */
	return (new);
}


int main()
{
	char arr[100], *copy;

	printf("Enter a line of text:\n");
	fgets(arr, 100, stdin);
	copy = my_strdup(arr);
	printf("Original string: %s\nNew string: %s\n", arr, copy);
	return 0;
}
