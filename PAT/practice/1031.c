#include <stdio.h>
#include <string.h>

int main() {
    char bytes[100] = { 0 };
    
    while (scanf("%s", bytes) != EOF) {
        int counts[10] = { 0 };
        int n = strlen(bytes);

        for (int i = 0; i < n; ++i) {
            counts[bytes[i]-'0']++;
        }

        int max_num = 0;
        for (int i = 0; i < 10; ++i) {
            if (counts[i] > max_num) {
                max_num = counts[i];
            }
        }

        for (int i = max_num; i > 0; --i) {
            for (int j = 0; j < 10; ++j) {
                putchar(counts[j] >= i ? '*' : ' ');
            }
            putchar('\n');
        }

        for (int i = 0; i < 10; ++i) {
            putchar('0'+i);
        }
        putchar('\n');
    }

    return 0;
}
