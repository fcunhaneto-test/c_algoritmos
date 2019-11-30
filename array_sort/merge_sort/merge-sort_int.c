/*
 * Ordenar array de inteiros pelo método merge sort.
 * Algoritmo mais eficiente até que o quick sort,
 * o problema é que ele consome muita memoria.
 * O(n(log(n)) todoa os caso.
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void merge(int *arr, int inicio, int meio, int fim) {
    int *temp, p1, p2, tamanho, i, j, k;
    int fim1 = 0, fim2 = 0;
    p1 = inicio;
    p2 = meio + 1;
    tamanho = fim - inicio;
    temp = malloc(fim * sizeof(int));
    
	for(i = 0; i < tamanho; i++) {
		if(!fim1 && !fim2) {
			if(arr[p1] < arr[p2]) {
				temp[i] = arr[p1];
				p1++; // p1 só muda depois que temp[i] recebe arr[p1]
			} else {
				temp[i] = arr[p2];
				p2++;
			}

			if(p1 > meio) fim1 = 1;
			if(p2 > fim) fim2 = 1;
		} else {
			if(!fim1) {
				temp[i] = arr[p1];
				p1++;
			} else {
				temp[i] = arr[p2];
				p2++;
			}
		}
	}

	for(j = 0, k = inicio; j < tamanho; j++, k++) {
		arr[k] = temp[j];
	}


    free(temp);
}

void merge_sort(int *arr, int inicio, int fim) {
    int meio;
    if(!(inicio == fim)) {
        meio = floor((inicio + fim)/2);

        merge_sort(arr, inicio, meio);
        merge_sort(arr, meio + 1, fim);
        merge(arr, inicio, meio, fim);
    }

}