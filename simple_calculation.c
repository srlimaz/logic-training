#include <stdio.h>

void	simple_calculation(int number_parts, double value_parts, double *result)
{
	*result = number_parts * value_parts;
}

int	main()
{
	int code_parts_A;
	int number_parts_A;
	double value_parts_A;
	double result_A;
	int code_parts_B;
	int number_parts_B;
	double value_parts_B;
	double result_B;
	double result_C;
	
	// Entrada
	scanf("%d %d %lf", &code_parts_A, &number_parts_A, &value_parts_A);
	scanf("%d %d %lf", &code_parts_B, &number_parts_B, &value_parts_B);

	// Processamento
	simple_calculation(number_parts_A, value_parts_A, &result_A);
	simple_calculation(number_parts_B, value_parts_B, &result_B);
	result_C = result_A + result_B;

	// Saída
	printf("VALOR A PAGAR: R$ %.2f\n", result_C);
	return 0;
}