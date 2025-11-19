#include <stdio.h>

#define N 2

int main(void)
{
    int r[N][N] = {0};
    int i, j, sum = 0;

    for (i = 0; i < N; i++) {
        printf("Enter row %d: ", i+1);
        for (j = 0; j < N; j++) {
            scanf("%d", &r[i][j]);
        }
    }
    printf("Row Totals: ");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            sum += r[i][j];
        }
        printf("%d ", sum);
        sum = 0;
    }

    return 0;
}