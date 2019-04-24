#include <stdio.h>
#include <stdlib.h>
#include "for.h"
#include <math.h>
#include <ctype.h>
#include <string.h>

int lexicographic_sort(const char *a, const char *b) {
    if (strcmp(a, b) > 0) {
        printf("%s\n", b);
        printf("%s\n", a);
    } else {
        printf("%s\n", a);
        printf("%s\n", b);
    }

}


int count_array(int arr[26]) {
    int count = 0;
    for (int i = 0; i < 26; i++) {
        if (arr[i] > 0)
            count++;
    }
    return count;
}

int sort_by_number_of_distinct_characters(const char *a, const char *b) {
    int b_count;
    int a_count;
    int alph_arr_a[26] = {0};
    for (int i = 0; i < strlen(a); ++i) {
        alph_arr_a[a[i] - 97]++;
    }
    int alph_arr_b[26] = {0};
    for (int i = 0; i < strlen(b); ++i) {
        alph_arr_b[a[i] - 97]++;
    }
    a_count = count_array(alph_arr_a);
    b_count = count_array(alph_arr_b);
    if (a_count > b_count) {
        printf("%s\n", b);
        printf("%s\n", a);
    } else if (a_count < b_count) {
        printf("%s\n", a);
        printf("%s\n", b);
    } else if (a_count == b_count) {
        lexicographic_sort(a, b);
    }

}


int sort_by_length(const char *a, const char *b) {
    if (strlen(a) > strlen(b)) {
        printf("%s\n", b);
        printf("%s\n", a);
    } else if (strlen(b) > strlen(a)) {
        printf("%s\n", a);
        printf("%s\n", b);
    } else if (strlen(a) == strlen(b)) {
        lexicographic_sort(a, b);
    }
}

int lexicographic_sort_reverse(const char *a, const char *b) {
    if (strcmp(a, b) > 0) {
        printf("%s\n", a);
        printf("%s\n", b);
    } else {
        printf("%s\n", b);
        printf("%s\n", a);
    }

}

int main() {
    char *x;
    char *y;
    x = ("asdıohdja");
    y = ("aadjnadsk");
    lexicographic_sort(x, y);
    printf("\n");
    lexicographic_sort_reverse(x, y);
    printf("\n");
    sort_by_length(x, y);
    printf("\n");
    sort_by_number_of_distinct_characters(x, y);


    return 0;
}


