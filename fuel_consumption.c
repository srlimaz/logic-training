#include <stdio.h>

void	calc_consumption(double kmh, double time,double *result)
{
	*result = (kmh * time) / 12;
}

int	main()
{
	int kmh;
	int time;
	double result;

	// Entrada
	scanf("%d", &time);
	scanf("%d", &kmh);

	// Processamento
	calc_consumption(kmh, time, &result);

	// Saída
	printf("%.3f\n", result);
	return 0;
}