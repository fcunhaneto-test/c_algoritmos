/*
 * Ordenar array de inteiros pelo método merge sort.
 * Algoritmo mais eficiente até que o quick sort,
 * o problema é que ele consome muita memoria.
 * O(n(log(n)) todoa os caso.
 */
#include <math.h>

void sort_int(int *arr, int ini, int fim) {
    int meio;
    if (ini < fim) {
        meio = floor((ini + fim)/2);
        sort_int(arr, ini, meio);
        sort_int(arr, meio+1, fim);
        merge(arr, ini, meio, fim);
    }
}

void merge_int(int *arr, int ini, int fim) {
    
}