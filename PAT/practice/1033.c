#include <stdio.h>

int main() {
    int m;

    while (scanf("%d", &m) != EOF) {
        long long int n = 0;
        while (m != 1) {
            m = m & 1 ? (3*m+1)/2 : m/2;
            n++;
        }
        printf("%lld\n", n);
    }

    return 0;
}
