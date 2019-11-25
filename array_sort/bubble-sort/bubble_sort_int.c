
/*
 * Ordenar array de inteiros pelo método bubble sort.
 * Algoritmo menos eficiente.
 * O(n) melhor caso (Quando já estão ordenados).
 * O(n²) caso medio.
 * O(n²) pior caso.
 */
 */
void bubble_sort(int *arr, int int_max) {
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