#include <stdio.h>

int main() {
    int n, m;

    while (scanf("%d %d", &n, &m) != EOF) {
        int r = 0;
        for (int i = 2; i <= n; ++i) {
            r = (r + m) % i;
        }
        printf("%d\n", r + 1);
    }

    return 0;
}
