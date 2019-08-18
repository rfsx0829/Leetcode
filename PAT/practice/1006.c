#include <stdio.h>

int main() {
    int m[10000] = { 0 };
    m[0] = 1;
    m[1] = 2;

    for (int i = 2; i < 10000; ++i) {
        m[i] = (m[i-1] + m[i-2]) % 10000;
    }

    int n;
    while (scanf("%d", &n) != EOF) {
        int temp;
        while (n--) {
            scanf("%d", &temp);
            printf("%04d", m[temp-1]);
        }
        printf("\n");
    }
    
    return 0;
}
