/*
 * Ordenação de um array de valores inteiros pelo método selection sort.
 */

void sort_int(int *arr, int max ) {
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

 

 