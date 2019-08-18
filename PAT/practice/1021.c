#include <stdio.h>

int main() {
    int n;
    double rates[5] = { 50.00, 33.33, 37.50, 36.67, 36.81 };
    while(scanf("%d", &n) != EOF) {
        if (n < 7 && n > 1) {
            printf("%2.2f\%\n", rates[n-2]);
        } else {
            printf("36.79\%\n");
        }
    }
    return 0;
}
