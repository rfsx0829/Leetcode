#include <stdio.h>

int main() {
    int n;
    while (scanf("%d", &n) != EOF) {
        if (n < 1 || n > 30) {
            continue;
        }
        
        int res = 1;
        while (--n) {
            res = (res + 1) * 2;
        }

        printf("%d\n", res);
    }
    return 0;
}
