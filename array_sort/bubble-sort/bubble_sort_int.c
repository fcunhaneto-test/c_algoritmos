
/*
 * Ordenar array de inteiros pelo método bubble sort.
 * Algoritmo menos eficiente.
 */
void sort_integer(int *arr, int int_max) {
    int i = int_max - 1;
    int j, aux;
    do {
        for(j=0; j<i; j++) {
            if(arr[j] > arr[i]) {
                aux = arr[i];
                arr[i] = arr[j];
                arr[j] = aux;
            }
        }
        i--;
    } while(i != 0);
}