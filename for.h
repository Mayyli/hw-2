
#define COLUMN_SIZE 3
#define ROW_SIZE 3
//
//#define FILE "matrix.txt"
//
int matrix[ROW_SIZE][COLUMN_SIZE];

void generateRandomMatrix(char*,int,int);
void readMatrixFromFile(char *);
int minInColumn(int);
int maxInColumn(int);
int minInRow(int);
int maxInRow(int);
int diagonalDiff();