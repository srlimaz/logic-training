#include <stdio.h>

void	simple_product(int A, int B, int *PROD)
{
	*PROD = A * B;
}

int	main()
{
	int PROD;
	int A;
	int B;

	scanf("%d", &A);
	scanf("%d", &B);
	simple_product(A, B, &PROD);
	printf("PROD = %d\n", PROD);
	return(0);
}
