#include <stdio.h>

// Função para calcular o salário de um funcionário baseado em quantas horas ele trabalhou.
void	salary_calculation(int hours_worked, double hourly_rate, double *result)
{
	*result = hours_worked * hourly_rate;
}

int	main()
{
	int employee_code;
	int hours;
	double value;
	double result;
	
	// Entrada.
	scanf("%d", &employee_code);
	scanf("%d", &hours);
	scanf("%lf", &value);

	//Processamento.
	salary_calculation(hours, value, &result);

	//Saída.
	printf("NUMBER = %d\n", employee_code);
	printf("SALARY = U$ %.2f\n", result);
	return 0;
}