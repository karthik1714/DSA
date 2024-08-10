#include <stdio.h>
#include <stdlib.h>

struct Matrix {
    int *A;
    int n;
};

void Set(struct Matrix *m, int i, int j, int x) {
    if(i >= j) {
        // Correct the indexing formula for lower triangular matrix
        m->A[i * (i - 1) / 2 + j - 1] = x;
    }
}

int Get(struct Matrix m, int i, int j) {
    if(i >= j) {
        return m.A[i * (i - 1) / 2 + j - 1];
    }
    return 0;
}

void Display(struct Matrix m) {
    int i, j;
    for(i = 1; i <= m.n; i++) { // Use 1-based indexing
        for(j = 1; j <= m.n; j++) { // Use 1-based indexing
            if(i >= j) {
                printf("%d ", m.A[i * (i - 1) / 2 + j - 1]);
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }
}

int main(int argc, const char *argv[]) {
    struct Matrix m;
    int i, j, x;

    printf("Enter Dimension: ");
    scanf("%d", &m.n);

    m.A = (int *)malloc(m.n * (m.n + 1) / 2 * sizeof(int)); // Correct memory allocation for lower triangular matrix

    printf("Enter all elements:\n");
    for(i = 1; i <= m.n; i++) {
        for(j = 1; j <= m.n; j++) {
            scanf("%d", &x);
            Set(&m, i, j, x);
        }
    }

    printf("\n\n");
    Display(m);

    // Free allocated memory
    free(m.A);

    return 0;
}

