#include <stdio.h>

int main() {
    long long int m[90] = { 0 };
    m[0] = 1;
    m[1] = 2;

    for (int i = 2; i < 90; ++i) {
        m[i] = m[i-1] + m[i-2];
    }

    int n;
    while (scanf("%d", &n) != EOF) {
        printf("%lld\n", m[n-1]);
    }
    
    return 0;
}
