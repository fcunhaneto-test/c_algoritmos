/*
 * Ordenar array de inteiros pelo método merge sort.
 * Algoritmo mais eficiente até que o quick sort,
 * o problema é que ele consome muita memoria.
 * O(n(log(n)) todoa os caso.
 */
#include <stdlib.h>

void sort_int(int *arr, int ini, int fim) {
    int meio;
    if (ini < fim) {
        meio = floor((ini + fim)/2);
        sort_int(arr, ini, meio);
        sort_int(arr, meio+1, fim);
        merge(arr, ini, meio, fim);
    }
}

void merge_int(int *arr, int ini, int meio, int fim) {
    int p1, p2, tamanho, i, j, k;
    int fim1 = 0, fim2 =0;
    int *temp = malloc(tamanho * sizeof(int));
    tamanho = fim - ini + 1;
    p1 = ini;
    p2 = meio + 1;
    if(temp != NULL);
}