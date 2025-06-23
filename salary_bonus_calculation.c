#include <stdio.h>

// Calcula a comissão de um vendedor e soma com o salario do mesmo
// Sendo: comissão 15% em cima das vendas
void	salary_bonus_calculation(double sales, double fixed_salary, double *result)
{
	*result = (sales * 0.15 + fixed_salary);
}

int	main()
{
	char name[20]; ///Determina que o tamanho seja 20 caracteres, contando com o \0
	double fixed_salary;
	double sales;
	double result;

	// Entrada
	scanf("%s", &name); // %s é usado para ler string, porém ela não lê 'espaços'
	scanf("%lf", &fixed_salary);
	scanf("%lf", &sales);

	// Processamento
	salary_bonus_calculation(sales, fixed_salary, &result);

	// Saída
	printf("TOTAL = R$ %.2f\n", result);
	return 0;
}