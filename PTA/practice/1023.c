#include <stdio.h>

int C(int, int);

int main() {
    int n, m;
    long long int emm[21] = { 0, 1, 1, 2 };
    for (int i = 4; i < 21; ++i) {
        emm[i] = (i-1) * (emm[i-1] + emm[i-2]);
    }

    while (scanf("%d %d", &n, &m) != EOF) {
        printf("%lld\n", C(n, n-m) * emm[m]);
    }
    return 0;
}

int C(int n, int m) {
    long long int b = 1, s = 1;
    if (m > n/2) {
        m = n - m;
    }
    for (int i = m; i > 0; --i) {
        b *= i;
        s *= n - i + 1;
    }
    return s / b;
}
