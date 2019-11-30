#include <stdio.h>
#include <limits.h>

#include "merge_sort_int.h"

int main() {
    int arr[] = {4, 23, 67, -8, 21};
    merge_sort(arr, 0, 5);

    for(int i=0; i<5; i++) {
		printf("%d, ", arr[i]);
	}
	printf("\n");

    return 0;
}