<h1>IGS: International Solutions</h1>

### _Desafio: Teste de avaliação em programação C ._

- O Propósito deste teste é avaliar meu conhecimento na linguagem de programação C.

## _Como executar os testes_

Cada teste está separado em sua respectiva pasta.

- Clone o repositório:
```
git clone git@github.com:Vinicius-Santoro/IGS_DesafioEmC.git
```
- Compile os arquivos:
```
make all
```
- Execute o desafio 1:
```
./desafio1.o
```
- Execute o desafio 2:
```
./desafio2.o
```
- Execute o desafio 3:
```
./desafio3.o
```
- Execute o desafio 4:
```
./desafio4.o
```
- Execute o desafio 5:
```
./desafio5.o
```

## _Lógica aplicada em cada desafio_

- Desafio 1:
```c
/*
Apenas valições condicionais para verificar o maior número.
*/
```
- Desafio 2:

Função que retorna o valor do fatorial - `*valor_ft`.
```c
void calc_fatorial(int *valor_ft, int valor_n)
{
  /*
  O comportamento desse loop segue a premissa de calcular o fatorial.
  Vejamos analiticamente abaixo com um exemplo de 5!:
  1º loop:
    *valor_ft (001) =  *valor_ft (001) * valor_n-- (005)
  2º loop:
    *valor_ft (005) =  *valor_ft (005) * valor_n-- (004)
  3º loop:
    *valor_ft (020) =  *valor_ft (020) * valor_n-- (003)
  4º loop:
    *valor_ft (060) =  *valor_ft (060) * valor_n-- (002)
  5º loop:
    *valor_ft (120) =  *valor_ft (120) * valor_n-- (001)
  */
    for(*valor_ft = 1; valor_n > 0; valor_n--)
        *valor_ft *= valor_n;
}
```

- Desafio 3:
  
 A lógica que utilizei para este desafio, foi a seguinte:<br>
 1º - ordenar o array em ordem crescente para facilitar a validação de soma com o algoritmo bubble sort.<br>
 2º - validar se o inteiro auxiliar é menor que o valor de referência.<br>
 3º - retornar a quantidade de vezes que incrementei para o seguinte passo.<br>

```c
int maximo_elementos(int valor_ref, int* array, int tamanho_array)
{
    int aux = 0;
    int i = 0;
    bubble_sort(array, tamanho_array);

    for(i = 0; aux < valor_ref; i++)
        aux = aux + array[i];
    return(i - 1);
}
```

- Desafio 4:

No meu entendimento, bitwise são as operações feitas bit por bit de cada número. A partir disso, desenvolvi meu desafio da seguinte forma:
  
 1º - transformei as variávies `v1` e `v2` em número binários de 8 bytes.<br>
 2º - transformei os binários para decimal seguinte a lógica de exponenciação..<br>
 3º - retornar o maior número de acordo com a transformação do binário feito.<br>
 
```c
int binario_para_decimal(int *numero)
{
    int decimal;
    for(int i = 0; i < 8; i++)
        decimal += (numero[i] * pow(2, i));
    return(decimal);
}
```

- Desafio 5:

Para este desafio, utilizei a lógica de cada índice do array cartela, ser procurado em todo o array de sorteio. Por exemplo.


  
 1º - transformei as variávies `v1` e `v2` em número binários de 8 bytes.<br>
 2º - transformei os binários para decimal seguinte a lógica de exponenciação..<br>
 3º - retornar o maior número de acordo com a transformação do binário feito.<br>
 
```c
int binario_para_decimal(int *numero)
{
    int decimal;
    for(int i = 0; i < 8; i++)
        decimal += (numero[i] * pow(2, i));
    return(decimal);
}
```
