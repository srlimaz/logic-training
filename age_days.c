#include <stdio.h>

// Função para calcular anos, meses e dias a partir de um total de dias.
void	calc_age_conversion(int entry, int *years, int *month, int *days)
{
	int temp;

	*years = entry / 365;
	temp = entry % 365;
	*month = temp / 30;
	*days = temp % 30;
}

int	main()
{
	int total_days, years, month, days;

	// Entrada.
	scanf("%d", &total_days);

	// Processamento.
	calc_age_conversion(total_days, &years, &month, &days);

	// Saída.
	printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", years, month, days);
	return 0;
}