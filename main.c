#include <stdio.h>
#include <stdlib.h>
#include "for.h"
#include <math.h>
#include <ctype.h>
#include <string.h>
//    generateRandomMatrix("matrix1.txt", 1, 100);
//    readMatrixFromFile("matrix1.txt");
//    for (int i = 0; i < ROW_SIZE; ++i) {
//        for (int j = 0; j < COLUMN_SIZE; ++j) {
//            printf("%d\t", matrix[i][j]);
//        }


int main() {
    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    char splintStrings[10][10];

    int j,cnt;
    j=0;
    cnt = 0;

    for(int i=0;i<=(strlen(s));i++){
        if (s[i]==' ' || s[i] =='\0' ){
            splintStrings[cnt][j]='\0';
            cnt++;
            j=0;
        }
        else{
            splintStrings[cnt][j]=s[i];
            j++;
        }

    }
    for (int i=0;i<cnt;i++){
        printf("%s\n",splintStrings[i]);
    }
    return 0;



}



