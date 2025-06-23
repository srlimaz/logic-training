#include <stdio.h>
 
// Calcula a média ponderada, com pesos 3.5 e 7.5
void	calculate_weighted_average(double grade1, double grade2, double *average)
{
	*average = ((grade1 * 3.5) + (grade2 * 7.5)) / 11;
}

int	main()
{
	double average;
	double grade1;
	double grade2;

	// Entrada
	scanf("%lf", &grade1);
	scanf("%lf", &grade2);

	// Processamento
	calculate_weighted_average(grade1, grade2, &average);

	// Saída
	printf("MEDIA = %.5f\n", average);
	return 0;
}
