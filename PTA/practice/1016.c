#include <stdio.h>

int main() {
    int n = 0, r = 0, temp = 0, count = 0;

    while(scanf("%d %d", &n, &r) == 2) {
        if (r < 2 || n < 1) {
            printf("Bad input\n");
            return 0;
        }

        count = 0;
        for (;;) {
            temp = n / r;
            if (n - temp*r == 1) {
                count++;
            }
            if (temp < r) {
                if (temp == 1) {
                    count++;
                }
                break;
            }
            n = temp;
        }

        printf("%d\n", count);
    }

    return 0;
}
