/*
 * Ordenar array de inteiros pelo método selection sort.
 * Algoritmo mais eficiente que o buble sort.
 * Sendo que para pequenas qunatidades supera até o quick sort.
 * O(n) melhor caso (Quando já estão ordenados).
 * O(n²) caso medio.
 * O(n²) pior caso.
 */

void selection_sort(int *arr, int max ) {
    int i, j, menor, aux;
    int m = max - 1;
    for(i = 0; i < m; i++) {
        menor = i;
        for(j = i+1; j < max; j++) {
            if(arr[j] < arr[menor]) {
                menor = j;
            }            
        }

        if(menor != i) {
            aux = arr[i];
            arr[i] = arr[menor];
            arr[menor] = aux;
        }
    }
}

 

 