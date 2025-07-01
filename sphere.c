#include <stdio.h>

// Função para calcular o volume de uma esfera.
void	volume_calculation(double raio, double *volume_result)
{
	*volume_result = (4/3.0) * 3.14159 * (raio * raio * raio);
}

int	main()
{
	int raio;
	double volume;

	// Entrada.
	scanf("%d", &raio);

	// Processamento.
	volume_calculation(raio, &volume);

	// Saída.
	printf("VOLUME = %.3f\n", volume);
	return 0;
}