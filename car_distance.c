#include <stdio.h>

void	calc_distance(int km, int *result)
{
	*result = km * 2;
}

int	main()
{
	int entry;
	int result;

	// Entrada
	scanf("%d", &entry);

	// Processamento
	calc_distance(entry, &result);

	// Saída
	printf("%d minutos\n", result);
	return 0;
}