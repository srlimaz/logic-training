#include <stdio.h>

void	calc_banknotes(int entry, int *note100, int *note50, int *note20, int *note10, int *note5, int *note2, int *note1)
{
	int leftover1, leftover2, leftover3, leftover4, leftover5, leftover6, leftover7;

	*note100 = entry / 100; // exemplo de entrada = 576, o resultado é para ser 5
	leftover1 = entry - (*note100 * 100); // aqui é para saber o quanto sobrou depois de separar as notas de 100, que seria 76
	*note50 = leftover1 / 50; // da mesma forma que anteriormente, aqui separa a sobra em notas de 50, o resultado aqui é para ser 1
	leftover2 = leftover1 - (*note50 * 50); // aqui pegamos a primeira sobra, e tiramos quantas notas foi retirada em 50, que seria 26
	*note20 = leftover2 / 20; // aqui separamos as notas de 20, sobrando 16
	leftover3 = leftover2 - (*note20 * 20); // novamente pega a sobra
	*note10 = leftover3 / 10; // separa as notas de 10
	leftover4 = leftover3 - (*note10 * 10); // novamente pega a sobra
	*note5 = leftover4 / 5; // separa as notas de 5
	leftover5 = leftover4 - (*note5 * 5);
	*note2 = leftover5 / 2;
	leftover6 = leftover5 - (*note2 * 2);
	*note1 = leftover6;
}

int	main()
{
	int entry;
	int note100, note50, note20, note10, note5, note2, note1;
	int result;

	// Entrada
	scanf("%d", &entry);

	// Processamento
	calc_banknotes(entry, &note100, &note50, &note20, &note10, &note5, &note2, &note1);

	// Saída
	printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n", entry, note100, note50, note20, note10, note5, note2, note1);
	return 0;
}