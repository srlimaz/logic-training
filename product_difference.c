#include <stdio.h>

// Calcula o produto de (A e B) e (C e D), calcula a diferença entre os dois resultados
void	product_difference(int A, int B, int C, int D, int *diff)
{
	*diff = ((A * B) - (C * D));
}

int	main()
{
	int A;
	int B;
	int C;
	int D;
	int diff;

	// Entrada
	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &C);
	scanf("%d", &D);
	
	// Processamento
	product_difference(A, B, C, D, &diff);

	// Saída
	printf("DIFERENCA = %d\n", diff);
	return 0;
}

