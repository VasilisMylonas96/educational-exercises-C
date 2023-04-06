#include <stdio.h>
#include <string.h>   /* strlen() */
#include <ctype.h>    /* isdigit() */


int main(int argc, char *argv[])
{
	int  i, j, sum = 0;
	char *s;

	/* An o xristis den edwse kanena orisma, to argc einai 1 kai sum einai 0 */
	for (i=1; i<argc; i++)             /* Gia kathe orisma */
	{
		s = argv[i];                     /* Deiktis sto orisma i gia efkolia */
		for (j = 0; j < strlen(s); j++)  /* Gia kathe xaractira tou orismatos */
		{
			if ( isdigit(s[j]) )
				sum += s[j] - '0';
		}
	}

	printf("%d\n", sum);
	return 0;
}
