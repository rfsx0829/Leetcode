#include <stdio.h>
#include <math.h>

int main() {
    int n = 0;

    while(scanf("%d", &n) != EOF) {
        printf("%d = ", n);

        for (int i = 2; i <= sqrt(n); ++i) {
            while (n != i) {
                if (n % i == 0) {
                    printf("%d * ", i);
                    n /= i;
                } else {
                    break;
                }
            }
            if (n == i) {
                break;
            }
        }

        printf("%d\n", n);
    }

    return 0;
}
