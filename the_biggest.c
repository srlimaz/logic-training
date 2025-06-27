#include <stdio.h>
#include <stdlib.h>

void	calc_largest(int a, int b, int c, int *result_biggest)
{
	int temp;

	temp = (a + b + abs(a - b)) / 2;
	*result_biggest = (temp + c + abs(temp - c)) / 2;
}

int	main()
{
	int a, b, c;
	int result;

	// Entrada
	scanf("%d %d %d", &a, &b, &c);

	// Processamento
	calc_largest(a, b, c, &result);

	// Saída
	printf("%d eh o maior\n", result);
	return 0;
}