#include <stdio.h>

int isPrime(int);

int main() {
    int x, y;
    while (scanf("%d %d", &x, &y) != EOF) {
        if (x == 0 && y == 0) {
            break;
        }

        int flag = 1;
        for (int i = x; i <= y; ++i) {
            int res = i*i+i+41;
            if (!isPrime(res)) {
                flag = 0;
                break;
            }
        }

        printf("%s\n", flag ? "OK" : "Sorry");
    }
    
    return 0;
}

int isPrime(int s) {
    int temp = s/2;
    for (int i = 2; i <= temp; ++i) {
        if (s % i == 0) {
            return 0;
        }
    }
    return 1;
}
