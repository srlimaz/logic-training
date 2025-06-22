#include <stdio.h>
 
void	average1(double A, double B, double *M)
{
	*M = (A + B) / 2;
}

int	main()
{
	double M;
	double A;
	double B;

	scanf("%lf", &A);
	scanf("%lf", &B);
	average1(A, B, &M);
	printf("MEDIA = %.5f\n", M);
	return (0);
}
