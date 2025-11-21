#include <stdio.h>

#define N 2

int main(void)
{
    int r[N][N] = {0};
    int i, j, sum = 0, col = 0;
    int high = 0, low = 100;

    for (i = 0; i < N; i++) {
        printf("Enter student %d quiz grades: ", i+1);
        for (j = 0; j < N; j++) {
            scanf("%d", &r[i][j]);
        }
    }
    //* Student total and average *//
    printf("\nStudent Scores:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            sum += r[i][j];
        }
        printf("Student %d total: %d ", i+1, sum);
        printf("\tAvr: %d\n", sum / N);
        sum = 0;
    }

    //* Quiz average, high, and low
    printf("\nQuiz Stats: ");
    for (j = 0; j < N; j++) {
        for (i = 0; i < N; i++) {
            col += r[i][j];
            if (r[i][j] > high) {
                high = r[i][j];
            }
            if (r[i][j] < low) {
                low = r[i][j];
            }
        }
        printf("\nQuiz %d Avr: %d; Low: %d, High: %d", j+1, col / N, low, high);
        col = 0;
        high = 0;
        low = 100;
    }
    printf("\n");
    return 0;
}