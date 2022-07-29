#include <stdio.h>

// int maximo_elementos(int valor_ref, int* array, int tamanho_array) {

//     //1 Task: organizar o arry de forma crescente.
//     int aux = 0;
//     for (int j = 0; j < tamanho_array - 1; j++)
//     {
//         if (array[j] > array[j + 1]) {
//             aux          = array[j];
//             array[j]     = array[j + 1];
//             array[j + 1] = aux;
//         }
//     }
// }

int main()
{
    int a, b;

    a = b = 6;

    int array[5] = {5, 4, 3, 2, 1};
    // int array[5] = {1, 2, 3, 4, 5};

    printf("Antes do bubble sort:\n");
     for(int i = 0; i < 5; i++)
        printf("%d\n", array[i]);

    // int aux = 0;
    // for (int contador = 1; contador < 5; contador++) 
    // {
    //     for (int i = 0; i < 5 - 1; i++)
    //     {
    //         if (array[i] > array[i + 1])
    //         {
    //             aux = array[i];
    //             array[i] = array[i + 1];
    //             array[i + 1] = aux;
    //         }
    //     }
    // }

    int  tamanho_array = 5;
    int aux = 0;
    for (int i = 1; i < tamanho_array; i++) 
    {
        for (int j = 0; j < tamanho_array - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                aux = array[j];
                array[j] = array[j + 1];
                array[j + 1] = aux;
            }
        }
    }
    printf("Depois do bubble sort:\n");
    for(int i = 0; i < 5; i++)
        printf("%d\n", array[i]);


}
