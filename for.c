#include <stdio.h>
#include "for.h"
#include <time.h>
#include <stdlib.h>
#include <assert.h>

void generateRandomMatrix(char *filename, int randomMin, int randomMax) {

    FILE *fp;
    fp = fopen(filename, "w");
    int difference = randomMax - randomMin;
    srand(time(NULL));
    for (int i = 0; i < ROW_SIZE; ++i) {
        for (int j = 0; j < COLUMN_SIZE; ++j) {
            matrix[i][j] = rand() % difference;
            matrix[i][j] += randomMin;
            fprintf(fp, "%d\t", matrix[i][j]);
        }
        fprintf(fp, "\n");
    }

    fclose(fp);
}

void readMatrixFromFile(char *filename) {
    FILE *fp;
    fp = fopen(filename, "r");
    for (int i = 0; i < ROW_SIZE; ++i) {
        for (int j = 0; j < COLUMN_SIZE; ++j) {
            fscanf(fp, "%d\t", &matrix[i][j]);
        }
    }
    fclose(fp);
}

int minInColumn(int column) {
    int i, minimum;
    minimum = matrix[0][column];
    for (i = 1; i < ROW_SIZE; i++) {
        if (matrix[i][column] < minimum) {
            minimum = matrix[i][column];
        }
    }
    return minimum;
}

int maxInColumn(int column) {
    int i, maximum;
    maximum = matrix[0][column];
    for (i = 1; i < ROW_SIZE; ++i) {
        if (maximum < matrix[i][column])
            maximum = matrix[i][column];
    }
    return maximum;
}

int minInRow(int row) {
    int i, minimum;
    minimum = matrix[row][0];
    for (i = 1; i < COLUMN_SIZE; ++i) {
        if (matrix[row][i] < minimum)
            minimum = matrix[row][i];
    }
    return minimum;
}

int maxInRow(int row) {
    assert(COLUMN_SIZE > 1);
    assert(row < ROW_SIZE && row > -1);
    int maximum, i;
    maximum = matrix[row][0];
    for (i = 1; i < COLUMN_SIZE; ++i) {
        if (maximum < matrix[row][i])
            maximum = matrix[row][i];
    }
    return maximum;
}

int diagonalDiff() {
    assert(ROW_SIZE == COLUMN_SIZE);
    int i, diff, lsum, rsum;
    lsum = 0;
    rsum = 0;
    for (i = 0; i < ROW_SIZE; ++i) {
        lsum += matrix[i][i];
    }
    for (i = 0; i < ROW_SIZE; ++i) {
        rsum += matrix[i][ROW_SIZE - 1 - i];
    }
    diff = rsum - lsum;
    return -diff;
}
