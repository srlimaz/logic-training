#include <stdio.h>

// Calculo para converter segundos em horas, minutos e segundos.
void	calc_conversion(int leftover, int *hours, int *minutes, int *seconds)
{
	*hours = leftover / 3600; // Calcula quantas horas tem na entrada.
	leftover %= 3600; // Retira a sobra dos segundos, sem as horas do calculo acima.

	*minutes = leftover / 60; // Da mesma forma acima, porém com minutos.
	leftover %= 60;

	*seconds = leftover;
}

int	main()
{
	int entry;
	int hours, minutes, seconds;

	// Entrada.
	scanf("%d", &entry);

	// Processamento.
	calc_conversion(entry, &hours, &minutes, &seconds);

	// Saída.
	printf("%d:%d:%d\n", hours, minutes, seconds);
	return 0;
}