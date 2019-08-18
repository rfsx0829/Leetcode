#include <stdio.h>
#include <math.h>

int main() {
    int n;
    while(scanf("%d", &n) != EOF && n != 0) {
        printf("%d\n", (int)ceil((log10(n)/log10(3))));
    }
    return 0;
}
