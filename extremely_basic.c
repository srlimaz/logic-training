#include <stdio.h>

void	extremely_basic(int A, int B, int *X)
{
	*X = A + B;
}

int main()
{
	int A;
	int B;
	int X;

	scanf("%d", &A);
	scanf("%d", &B);
	extremely_basic(A, B, &X);
	printf("X = %d\n", X);
	return (0);
}
