#include <stdio.h>

// Função de raiz quadrada
double square_root(double number) 
{
	double x = number;
	double precision = 0.00001;

	while ((x * x - number) > precision || (x * x - number) < -precision) 
	{
		x = (x + number / x) / 2;
	}

	return x;
}

// Função para calcular a distancia entre dois pontos
void	calc_distance_points(double point_x1, double point_y1, double point_x2, double point_y2, double *distance)
{
	double result_root;

	result_root = ((point_x2 - point_x1) * (point_x2 - point_x1)) + ((point_y2 - point_y1) * (point_y2 - point_y1));
	*distance = square_root(result_root);
}

int	main()
{
	double x1, y1, x2, y2, result;

	// Entrada
	scanf("%lf %lf", &x1, &y1);
	scanf("%lf %lf", &x2, &y2);

	// Processamento
	calc_distance_points(x1, y1, x2, y2, &result);

	// Saída
	printf("%.4f\n", result);
	return 0;
}