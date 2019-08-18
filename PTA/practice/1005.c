#include <stdio.h>

int main() {
    int m[100000] = { 0 };
    m[0] = 1;
    m[1] = 2;

    for (int i = 2; i < 100000; ++i) {
        m[i] = (m[i-1] + m[i-2]) % 1000000;
    }

    int n;
    while (scanf("%d", &n) != EOF) {
        if (n > 29) {
            printf("%06d\n", m[n-1]);
        } else {
            printf("%d\n", m[n-1]);
        }
    }
    
    return 0;
}
