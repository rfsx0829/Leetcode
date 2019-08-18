#include <stdio.h>

int main() {
    int n = 0, r = 0, temp = 0, count = 0;
    char bytes[20] = {};

    while(scanf("%d %d", &n, &r) == 2) {
        if (r < 2 || n < 1) {
            printf("Bad input\n");
            return 0;
        }
        
        count = 0;
        for (;;) {
            temp = n / r;
            n -= temp*r;
            if (n < 10) {
                bytes[count++] = n+'0';
            } else {
                bytes[count++] = n-10+'A';
            }
            
            if (temp < r) {
                if (temp < 10) {
                    bytes[count++] = temp+'0';
                } else {
                    bytes[count++] = temp-10+'A';
                }
                break;
            }
            n = temp;
        }

        for (int i = count-1; i > -1; --i) {
            printf("%c", bytes[i]);
        }
        printf("\n");
    }

    return 0;
}
