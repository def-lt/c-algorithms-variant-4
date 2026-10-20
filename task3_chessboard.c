#include <stdio.h>
int main(void) {
    int n, k;
    if (scanf("%d %d", &n, &k) != 2 || n < 1 || n > 20 || k < 1 || k > 5) {
        printf("error\n");
        return 1;
    }
    for (int row = 0; row < n * k; row++) {
        for (int col = 0; col < n * k; col++) {
            int r = row / k, c = col / k;
            putchar((r + c) % 2 == 0 ? '.' : '#');
        }
        putchar('\n');
    }
    return 0;
}
