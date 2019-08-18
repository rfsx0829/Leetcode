#include <stdio.h>

int main() {
    long long int emm[21] = { 0 };
    emm[1] = 0;
    emm[2] = 1;

    for (int i = 3; i < 21; ++i) {
        emm[i] = (i-1) * (emm[i-1] + emm[i-2]);
    }

    int n;
    while (scanf("%d", &n) != EOF) {
        printf("%lld\n", emm[n]);
    }
    return 0;
}
