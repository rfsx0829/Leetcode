#include <stdio.h>

int main() {
    int n = 0, temp = 0, ok = 0, n_bak = 0, count = 0;
    char bytes[20] = {};

    while(scanf("%d", &n) == 1) {
        if (n < 1) {
            printf("Bad input\n");
            return 0;
        }
        n_bak = n;

        ok = 0;
        for (int r = 2; r < 17; ++r) {
            if (ok) {
                break;
            }

            n = n_bak;
            count = 0;

            for (;;) {
                temp = n / r;
                n -= temp * r;
                if (n < 10) {
                    bytes[count++] = n+'0';
                } else {
                    bytes[count++] = n-10+'A';
                }

                if (temp < r) {
                    if (!temp) {
                        break;
                    }
                    if (temp < 10) {
                        bytes[count++] = temp+'0';
                    } else {
                        bytes[count++] = temp-10+'A';
                    }
                    break;
                }
                n = temp;
            }

            if (count == 1) {
                ok = 1;
                break;
            }

            for (int i = 0; i < count/2; ++i) {
                if (bytes[i] != bytes[count-i-1]) {
                    break;
                }
                if (i == count/2-1) {
                    ok = 1;
                }
            }
        }

        printf("%s\n", ok ? "Yes" : "No");
    }
    return 0;
}
