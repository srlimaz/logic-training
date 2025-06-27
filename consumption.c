#include <stdio.h>

// Função para calcular quanto km um veiculo faz com 1 litro
void	calc_consumption(int distance, float fuel, double *result)
{
	*result = distance / fuel;
}

int	main()
{
	int x;
	float y;
	double result;

	// Entrada
	scanf("%d", &x);
	scanf("%f", &y);

	// Processamento
	calc_consumption(x, y, &result);

	// Saída
	printf("%.3f km/l\n", result);
	return 0;
}