#include <stdio.h>
#include <stdlib.h>
#include "for.h"


int main() {
    generateRandomMatrix("matrix1.txt", 1, 100);
    readMatrixFromFile("matrix1.txt");
    for (int i = 0; i < ROW_SIZE; ++i) {
        for (int j = 0; j < COLUMN_SIZE; ++j) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    minInColumn(2);
    maxInColumn(2);
    minInRow(2);
    maxInRow(2);
    printf("%d\n", diagonalDiff());
    return 0;
}


