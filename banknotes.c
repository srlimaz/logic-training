#include <stdio.h>

// Calculo para identificar e separar em quantas notas possivel a entrada pode ter
void	calc_banknotes(int leftover, int *note100, int *note50, int *note20, int *note10, int *note5, int *note2, int *note1)
{
	// Separação de notas de 100
	*note100 = leftover / 100; // retiramos o maximo possivel de notas de 100
	leftover %= 100; // calculo para saber o resto, pegando o valor de entrada, divido por 100, o resto da operação é nossa sobra para prosseguir o calculo
	// Separação de notas de 50
	*note50 = leftover / 50; // apartir daqui o código se repete mudando apenas o valor, para saber quantas notas a sobra ainda tem para serem alocadas
	leftover %= 50; 
	// Separação de notas de 20
	*note20 = leftover / 20;
	leftover %= 20;
	// Separação de notas de 10
	*note10 = leftover / 10;
	leftover %= 10;
	// Separação de notas de 5
	*note5 = leftover / 5;
	leftover %= 5;
	// Separação de notas de 2
	*note2 = leftover / 2;
	leftover %= 2;
	// Aqui pegamos a ultima sobra sem ter calculo pois não existe mais cédulas abaixo de 1
	*note1 = leftover;
}

int	main()
{
	int entry;
	int note100, note50, note20, note10, note5, note2, note1;

	// Entrada
	scanf("%d", &entry);

	// Processamento
	calc_banknotes(entry, &note100, &note50, &note20, &note10, &note5, &note2, &note1);

	// Saída
	printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n", entry, note100, note50, note20, note10, note5, note2, note1);
	return 0;
}