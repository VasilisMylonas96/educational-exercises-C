#include <stdio.h>

#define N 3
int check_magic(int mat[N][N]);


int main(void) {
	int i, j;
	int sq1[N][N] = { 
		{ 9, 5, 1},
		{ 2, 7, 6},
		{ 4, 3, 8}
	};
	int sq2[N][N] = { 
		{ 2, 7, 6},
		{ 9, 5, 1},
		{ 4, 3, 8}
	};
	  
	if (check_magic(sq1))
		printf("sq1 is magic\n");
	else
		printf("sq1 is not magic\n");

	if (check_magic(sq2))
		printf("sq2 is magic\n");
	else
		printf("sq2 is not magic\n");
	
	printf("Enter your own %dx%d matrix: ", N, N);
	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++)
			scanf("%d", &(sq1[i][j]));
		
	if (check_magic(sq1))
		printf("it is magic\n");
	else
		printf("it is not magic\n");

	return 0;
}


int check_magic(int mat[N][N])
{
	int sum = 0, tmpsum, i, j;
	
	for (i = 0; i < N; i++)     /* find the sum of main diagonal */
	  sum += mat[i][i];
	
	/* Try every row */
	for (i = 0; i < N; i++)              /* for every row */
	{
		for (j = tmpsum = 0; j < N; j++)   /* for each element of the row */
		{
		  tmpsum += mat[i][j];
		}
		if (tmpsum != sum)
			return 0;                        /* no magic here */
	}

	/* Try every column */
	for (j = 0; j < N; j++)              /* for every row */
	{
		for (i = tmpsum = 0; i < N; i++)   /* for each element of the row */
		{
		  tmpsum += mat[i][j];
		}
		if (tmpsum != sum)
			return 0;                        /* no magic here */
	}

	/* Try secondary diagonal */
	for (i = tmpsum = 0; i < N; i++)     /* find the sum of main diagonal */
	  tmpsum += mat[i][N-i-1];
	
	return ( (tmpsum == sum) ? 1 : 0 );
}
