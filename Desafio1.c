//-------------------------------------------------------------------------------------------------------
/*
* @1
* Desenvolver a função: ‘maior_valor’; que recebe quatro valores do tipo inteiro e retorna o maior valor.
*
*/
//-------------------------------------------------------------------------------------------------------
#include <stdio.h>

int	maior_valor(int v1, int v2, int v3, int v4)
{
    int maior_numero;

	maior_numero = v1;
    for(int i = 0; i < 4; i++)
	{
		if(v2 > maior_numero)
			maior_numero = v2;
		else if (v3 > maior_numero)
			maior_numero = v3;
		else if (v4 > maior_numero)
			maior_numero = v4;
	}
	return (maior_numero);
}

int	main() {
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	int valor = maior_valor(a, b, c, d);
	printf("%d", valor);
	return 0;
}
