#include <stdio.h>


void int_to_string(int num, char *string)
{
	sprintf(string, "%d", num);   /* printf to string */
}


int main()
{
	char s[12];   /* 10 + sign + \0 */
	int  n;
  
	printf("Give an integer: ");
	scanf("%d", &n);
	int_to_string(n, s);
	printf("%s\n", s); 
	return 0;
}

