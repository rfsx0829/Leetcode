#include <stdio.h>

int main() {
    long long int m[100] = { 0 };
    m[0] = 1;
    m[1] = 2;

    for (int i = 2; i < 100; ++i) {
        m[i] = m[i-1] + m[i-2];
    }

    int n, from, to;
    scanf("%d", &n);
    while (n--) {
        scanf("%d %d", &from, &to);
        printf("%lld\n", m[to-from-1]);
    }
    
    return 0;
}
