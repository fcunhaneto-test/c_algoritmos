/*
 * Ordenar array de inteiros pelo método merge sort.
 * Algoritmo mais eficiente até que o quick sort,
 * o problema é que ele consome muita memoria.
 * O(n(log(n)) todoa os caso.
 */
#include <stdlib.h>
#include <math.h>

void merge(int *arr, int ini, int meio, int fim) {
    
}

void merge_sort(int *arr, int ini, int fim) {
    int meio;
    if(ini < fim) {
        meio = floor((fim + ini)/2);
        merge_sort(arr, ini, meio);
        merge_sort(arr, meio + 1, fim);

    }

}

