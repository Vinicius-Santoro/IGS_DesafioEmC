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

int calcular_maximum_bitwise(int v1, int v2) {

    /*
    1: transformar v1 em binário de 8 bytes;
    2: transformar v2 em binário de 8 bytes;
    3: comparar por binario
        - transformar para decimal e validar o maior
    */


}
int main() {

    int valor_1, valor_2, maior_valor;
    printf("Informe os valores.\n");
    scanf("%d %d", &valor_1, &valor_2);
    maior_valor = calcular_maximum_bitwise(valor_1, valor_2);

    printf("O maior valor e: %d .\n", maior_valor);

 return 0;
}