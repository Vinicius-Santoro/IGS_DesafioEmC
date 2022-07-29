//---------------------------------------------------------------------------------------------------------
/*
* @4
* Desenvolva a função a qual recebe dois valores de inteiros e que faça a todas as operacoes de ‘Bitwise’ e devolva o maior resultado
* entre eles.
*/
//---------------------------------------------------------------------------------------------------------
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int binario_para_decimal(int *numero)
{
    int decimal;

    decimal =  (numero[0] * pow(2,0) + \
                numero[1] * pow(2,1) + \
                numero[2] * pow(2,2) + \
                numero[3] * pow(2,3) + \
                numero[4] * pow(2,4) + \
                numero[5] * pow(2,5) + \
                numero[6] * pow(2,6) + \
                numero[7] * pow(2,7));
    return(decimal);
}

int calcular_maximum_bitwise(int v1, int v2) {

    /*
    1: transformar v1 em binário de 8 bytes;
    2: transformar v2 em binário de 8 bytes;
    3: comparar por binario
        - transformar para decimal e validar o maior
    */
    int array_v1[8] = {0};
    int array_v2[8] = {0};
    int i = 0;
    int j = 0;
    int aux_v1 = v1;
    int aux_v2 = v2;

   	while(v1 > 0)
	{
		array_v1[i] = v1 % 2;
		i++;
		v1 = v1 / 2;
	}
    while(v2 > 0)
	{
		array_v2[i] = v2 % 2;
		j++;
		v2 = v2 / 2;
	}
    if(binario_para_decimal(array_v1) == binario_para_decimal(array_v2))
        return (aux_v1);
    else if (binario_para_decimal(array_v1) > binario_para_decimal(array_v2))
        return (aux_v1);
    else
        return (aux_v2);
}
int main() {

    int valor_1, valor_2, maior_valor;
    printf("Informe os valores.\n");
    scanf("%d %d", &valor_1, &valor_2);
    maior_valor = calcular_maximum_bitwise(valor_1, valor_2);

    printf("O maior valor e: %d .\n", maior_valor);

 return 0;
}