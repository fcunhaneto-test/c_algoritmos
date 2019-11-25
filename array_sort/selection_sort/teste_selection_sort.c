/*
 * Ordenar array de inteiros pelo método selection sort.
 * Algoritmo mais eficiente que o buble sort.
 * Sendo que para pequenas qunatidades supera até o quick sort.
 */
#include <stdio.h>

#include "selection_sort_int.h"

#define MAX_INT 20

int main() {
    int arr[MAX_INT] = {0, 34, 2, 100, 37, 69, 39, 72, 41, 42, 44, 77, 14, 48, 84, 54, 23, 91, 93, 30};

    sort_int(arr, MAX_INT);
    printf("\n");
    for(int i = 0; i < MAX_INT; i++) {
        printf("%d, ", arr[i]);
    }
    printf("\n");
}