#include <stdio.h>

int main() {
    int m[55] = { 0 };
    m[0] = 1;
    m[1] = 2;
    m[2] = 3;

    for (int i = 3; i < 55; ++i) {
        m[i] = m[i-1] + m[i-3];
    }

    int n;
    while (scanf("%d", &n) != EOF) {
        printf("%d\n", m[n-1]);
    }
    
    return 0;
}
