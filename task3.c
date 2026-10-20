#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n, k;
    if (scanf("%d %d", &n, &k) != 2) {
        printf("error\n");
        return 1;
    }
    if (n < 1 || n > 20 || k < 1 || k > 5) {
        printf("error\n");
        return 1;
    }

    for (int row = 0; row < n; row++) {
        for (int r = 0; r < k; r++) {
            for (int col = 0; col < n; col++) {
                char c = ((row + col) % 2 == 0) ? '.' : '#';
                for (int c_i = 0; c_i < k; c_i++) {
                    putchar(c);
                }
            }
            putchar('\n');
        }
    }
    return 0;
}
