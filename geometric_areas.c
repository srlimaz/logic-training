#include <stdio.h>

// Função para calcular a area do triangulo retangulo
void	calc_triangle(double base, double altura, double *triangle_area)
{
	*triangle_area = (base * altura) / 2;
}

// Função para calcular a área do círculo
void	calc_circle(double raio, double *circle_area)
{
	*circle_area = 3.14159 * (raio * raio);
}

int	main()
{
	double A, B, C;
	double result_triangle;
	double result_circle;

	// Entrada
	scanf("%lf %lf %lf", &A, &B, &C);

	// Processamento
	calc_triangle(A, C, &result_triangle);
	calc_circle(C, &result_circle);

	// Saída
	printf("TRIANGULO: %.3f\n", result_triangle, "CIRCULO: %.3f\n", result_circle);
	return 0;
}