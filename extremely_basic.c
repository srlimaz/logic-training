#include <stdio.h>

// Função para calcular a soma de duas entradas.
void	extremely_basic(int A, int B, int *X)
{
	*X = A + B;
}

int main()
{
	int A;
	int B;
	int X;

	// Entrada.
	scanf("%d", &A);
	scanf("%d", &B);
	// Processamento.
	extremely_basic(A, B, &X);
	// Saída.
	printf("X = %d\n", X);
	return (0);
}
