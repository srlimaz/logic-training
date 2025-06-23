#include <stdio.h>

// Calcula média ponderada de 3 notas de um aluno, com pesos 2, 3 e 5
void    calculate_weighted_average2(double grade1,double grade2,double grade3, double *average)
{
    *average = ((grade1 * 2) + (grade2 * 3) + (grade3 * 5)) / 10;
}

int main()
{
    double grade1;
    double grade2;
    double grade3;
    double average;

    // Entrada
    scanf("%lf", &grade1);
    scanf("%lf", &grade2);
    scanf("%lf", &grade3);

    // Processamento
    calculate_weighted_average2(grade1, grade2, grade3, &average);

    // Saída
    printf("MEDIA = %.1f\n", average);    
    return 0;
}
