#include <stdio.h>

// Função para calcular a área do círculo a partir de uma entrada.
void	area_circle(double raio, double *area)
{
	double n;

	n = 3.14159;
	*area = n * (raio * raio);
}

int main()
{
	double raio;
	double area;
	
	// Entrada.
	scanf("%lf", &raio);
	// Processamento.
	area_circle(raio, &area);
	// Saída.
	printf("A=%.4f\n", area);
	return (0);
}

