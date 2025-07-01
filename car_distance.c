#include <stdio.h>

// Função para calcular a distância entre dois carros, a partir de quantos minutos ele percorreram, um a 60km/h e outro a 90 km/h.
void	calc_distance(int km, int *result)
{
	*result = km * 2;
}

int	main()
{
	int entry;
	int result;

	// Entrada.
	scanf("%d", &entry);

	// Processamento.
	calc_distance(entry, &result);

	// Saída.
	printf("%d minutos\n", result);
	return 0;
}