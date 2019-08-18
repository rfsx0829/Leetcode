#include <stdio.h>

int main() {
    int n = 0, b = 0, s = 0;
    scanf("%d", &n);
    if (n < 0 || n >= 1000) {
        printf("Bad input\n");
        return 0;
    }
    
    b = n / 100;
    n = n - 100 * b;
    for(int i = 0; i < b; ++i) {
        printf("B");
    }
    
    s = n / 10;
    n = n - 10 * s;
    for(int i = 0; i < s; ++i) {
        printf("S");
    }
    
    for(int i = 1; i <= n; ++i) {
        printf("%d", i);
    }
    
    printf("\n");
    
    return 0;
}
