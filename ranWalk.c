#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define Grid 10

int main(void)
{
    char ch[Grid][Grid] = {0};
    char let = 'A';
    int walk = 0, i = 0, j = 0, flag = 0;

    for (i = 0; i < Grid; i++) {
        for (j = 0; j < Grid; j++) {
            ch[i][j] = '.';
        }
    }

    i = 0; j = 0;

    srand((unsigned) time(NULL));

    ch[0][0] = 'A'; //* Walk Start location*//

    while (1) {
        walk = rand() % 4; //* Either 0, 1, 2, 3 *//
        while (flag < 4) {
            if (walk == 0 && j-1 >= 0 && ch[i][j-1] == '.') {
                j -= 1;
                flag = 5;
            }
            else if (walk == 2 && j+1 < Grid && ch[i][j+1] == '.') {
                j += 1;
                flag = 5;
            }
            else if (walk == 1 && i+1 < Grid && ch[i+1][j] == '.') {
                i += 1;
                flag = 5;
            }
            else if (walk == 3 && i-1 >= 0 && ch[i-1][j] == '.') {
                i -= 1;
                flag = 5;
            }       
            else {
                walk = (walk + 1) % 4;
                flag += 1;
            }
        }
        if (flag == 4)
            break;
        else if (flag == 5)
            ;
        else
            printf("Error");

        let += 1;
        if (let > 'Z')
            break;
        ch[i][j] = let;
        flag = 0;
    }

    for (i = 0; i < Grid; i++) {
        for (j = 0; j < Grid; j++) {
            printf("%c", ch[i][j]);
        }
        printf("\n");
    }

    return 0;
}