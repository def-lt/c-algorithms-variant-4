#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n, p, q;
    if (scanf("%d %d %d", &n, &p, &q) != 3) {
        printf("error\n");
        return 1;
    }
    if (n < 1 || n > 1000 || p < 2 || p > 9 || q < 2 || q > 9 || p == q) {
        printf("error\n");
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        if (i > 1) {
            printf(" ");
        }
        if (i % p == 0 && i % q == 0) {
            printf("fizzbuzz");
        } else if (i % p == 0) {
            printf("fizz");
        } else if (i % q == 0) {
            printf("buzz");
        } else {
            printf("%d", i);
        }
    }
    printf("\n");
    return 0;
}
