#include <stdio.h>

int main() {
    long long int m[90] = { 0 };
    m[0] = 1;
    m[1] = 1;

    for (int i = 2; i < 90; ++i) {
        m[i] = m[i-1] + m[i-2];
    }

    int from, to;
    while (scanf("%d %d", &from, &to) != EOF) {
        long long int res = 0;
        for (int i = from-1; i < to; ++i) {
            res += m[i];
        }
        printf("%lld\n", res);
    }
    
    return 0;
}
