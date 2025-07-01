#include <stdio.h>

// Função para calcular a área do triângulo retângulo.
void	calc_triangle(double base, double height, double *triangle_area)
{
	*triangle_area = (base * height) / 2;
}

// Função para calcular a área do círculo.
void	calc_circle(double ray, double *circle_area)
{
	*circle_area = 3.14159 * (ray * ray);
}

// Função para calcular a área do trapézio.
void	calc_trapezoid(double base_a, double base_b, double height, double *trapezoid_area)
{
	*trapezoid_area = (base_a + base_b) * height / 2;
}

// Função para calcular a area do quadrado.
void	calc_square(double side, double *square_area)
{
	*square_area = side * side;
}

// Função para calcular a area do retângulo.
void	calc_rectangle(double side_a, double side_b, double *rectangle_area)
{
	*rectangle_area = side_a * side_b;
}



int	main()
{
	double A, B, C;
	double result_triangle;
	double result_circle;
	double result_trapezoid;
	double result_square;
	double result_rectangle;

	// Entrada.
	scanf("%lf %lf %lf", &A, &B, &C);

	// Processamento.
	calc_triangle(A, C, &result_triangle);
	calc_circle(C, &result_circle);
	calc_trapezoid(A, B, C, &result_trapezoid);
	calc_square(B, &result_square);
	calc_rectangle(A, B, &result_rectangle);

	// Saída.
	printf("TRIANGULO: %.3f\nCIRCULO: %.3f\nTRAPEZIO: %.3f\nQUADRADO: %.3f\nRETANGULO: %.3f\n", result_triangle, result_circle, result_trapezoid, result_square, result_rectangle);
	return 0;
}