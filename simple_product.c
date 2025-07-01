#include <stdio.h>

// Função para calcular o produto a partir de duas entradas.
void	simple_product(int A, int B, int *PROD)
{
	*PROD = A * B;
}

int	main()
{
	int PROD;
	int A;
	int B;

	// Entrada
	scanf("%d", &A);
	scanf("%d", &B);
	// Processamento
	simple_product(A, B, &PROD);
	// Saída
	printf("PROD = %d\n", PROD);
	return(0);
}
