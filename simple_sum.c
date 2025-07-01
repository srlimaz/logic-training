#include <stdio.h>

// Função de soma.
void	simple_sum(int A, int B, int *SOMA)
{
	*SOMA = A + B;
}

int	main()
{
	int SOMA;
	int A;
	int B;

	// Entrada.
	scanf("%d", &A);
	scanf("%d", &B);
	// Processamento.
	simple_sum(A, B, &SOMA);
	// Saída.
	printf("SOMA = %d\n", SOMA);
	return(0);
}
