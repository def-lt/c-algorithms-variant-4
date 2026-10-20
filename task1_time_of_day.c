#include <stdio.h>
int main(void) {
    int h, m;
    if (scanf("%d %d", &h, &m) != 2 || h < 0 || h > 23 || m < 0 || m > 59) {
        printf("error\n");
        return 1;
    }
    const char *part;
    if (h <= 5) part = "night";
    else if (h <= 11) part = "morning";
    else if (h <= 17) part = "day";
    else part = "evening";
    int h12 = h % 12;
    if (h12 == 0) h12 = 12;
    printf("%s %d:%02d %s\n", part, h12, m, h < 12 ? "AM" : "PM");
    return 0;
}
