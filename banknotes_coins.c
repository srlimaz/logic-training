#include <stdio.h>

// Função para identificar e separar em quantas notas possíveis a entrada pode ter.
void calc_banknotes(int leftover, int *note100, int *note50, int *note20, int *note10, int *note5, int *note2, int *coin1, int *coin50, int *coin25, int *coin10, int *coin5, int *cent1)
{
	*note100 = leftover / 10000;
	leftover %= 10000;

	*note50 = leftover / 5000;
	leftover %= 5000;

	*note20 = leftover / 2000;
	leftover %= 2000;

	*note10 = leftover / 1000;
	leftover %= 1000;

	*note5 = leftover / 500;
	leftover %= 500;

	*note2 = leftover / 200;
	leftover %= 200;

	*coin1 = leftover / 100;
	leftover %= 100;

	*coin50 = leftover / 50;
	leftover %= 50;

	*coin25 = leftover / 25;
	leftover %= 25;

	*coin10 = leftover / 10;
	leftover %= 10;

	*coin5 = leftover / 5;
	leftover %= 5;

	*cent1 = leftover;
}


int	main()
{
	double entry;
	int total_cents;
	int note100, note50, note20, note10, note5, note2, coin1, coin50, coin25, coin10, coin5, cent1;

	// Entrada.
	scanf("%lf", &entry);
	total_cents = (int)(entry * 100 + 0.5);

	// Processamento.
	calc_banknotes(total_cents, &note100, &note50, &note20, &note10, &note5, &note2, &coin1, &coin50, &coin25, &coin10, &coin5, &cent1);

	// Saída.
	printf("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\nMOEDAS:\n%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n", note100, note50, note20, note10, note5, note2, coin1, coin50, coin25, coin10, coin5, cent1);
	return 0;
}