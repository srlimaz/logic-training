#include <stdio.h>

void	simple_sum(int A, int B, int *SOMA)
{
	*SOMA = A + B;
}

int	main()
{
	int SOMA;
	int A;
	int B;

	scanf("%d", &A);
	scanf("%d", &B);
	simple_sum(A, B, &SOMA);
	printf("SOMA = %d\n", SOMA);
	return(0);
}
