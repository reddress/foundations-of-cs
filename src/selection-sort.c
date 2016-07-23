#include <stdio.h>
#include "conventions.h"

DefCell(int, CELL, LIST);


void SelectionSort(int A[], int n)
{
    int i, j, small, temp;
    for (i = 0; i < n-1; i++) {
        small = i;
        for (j = i+1; j < n; j++) {
            if (A[j] < A[small]) {
                small = j;
            }
        }
        temp = A[small];
        A[small] = A[i];
        A[i] = temp;
    }
}

main() {
    int i;
    int lst[] = {3, 1, 4, 1, 5, 9, 2, 6, 5};
    SelectionSort(lst, 9);
    for (i = 0; i < 9; i++) {
        printf("%d ", lst[i]);
    }
}
