#include <stdio.h>

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
	

	scanf("%lf", &raio);
	area_circle(raio, &area);
	printf("A=%.4f\n", area);
	return (0);
}

